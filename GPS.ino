#include <TinyGPS++.h>
#include <SoftwareSerial.h>
TinyGPSPlus gps;
SoftwareSerial gpsSerial(2, 3);
SoftwareSerial gsmSerial(4, 5);
int i;

#define LED 6
#define PushButton 7
#define Switch 8
#define VoltageDivider A0
bool mode;
bool buttonstate = 1;

void setup() {
  gsmSerial.begin(9600);
  gpsSerial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(PushButton, INPUT_PULLUP);
  pinMode(Switch, INPUT_PULLUP);
  pinMode(VoltageDivider, INPUT);
  digitalWrite(LED, LOW);

  if (analogRead(VoltageDivider) < 540) {
    digitalWrite(LED, HIGH);
  }

  while (i < 100) {
    if (digitalRead(PushButton) == 0) {
      buttonstate = 0;
    }
    delay(100);
    i++;
  }

}

void loop() {
  if (analogRead(VoltageDivider) < 540) {
    digitalWrite(LED, HIGH);
  }

  mode = digitalRead(Switch);
  if (digitalRead(PushButton) == 0) {
    buttonstate = 0;
  }

  if ((mode == 1) && (buttonstate == 0)) { //Call Mode
    gsmSerial.println("ATD+84986894994");
    delay(10000);
    gsmSerial.println("ATH");
    buttonstate = 1;
  }

  if ((mode == 0) && (buttonstate == 0)) { //GPS SMS Mode
    while (gpsSerial.available() > 0)
      if (gps.encode(gpsSerial.read())) {
        if (gps.location.isValid()) {
          gsmSerial.println("AT+CMGF=1");
          gsmSerial.println("AT+CMGS=\"+84986894994"");
          gsmSerial.print(gps.location.lat(), 6);
          gsmSerial.print(" ");
          gsmSerial.print(gps.location.lng(), 6);
          gsmSerial.write(26);
          buttonstate = 1;
        }
      }
  }
}

# GPS-SMS-rescue-device

# Rescue device by using GPS and SMS

This is one of my classes’s project. Although this is a project for a certain subject, my teacher let us do whatever we want as long as we using a communication method. Therefore this subject has no restrictions.
# Functionalities: 
If you are lost, you can send your GPS location (just by press a button) to a phone number, so they can rescue you!
With just a few simple change in code, it can have other functionalities, such as:
- Pet (cats and dogs) finder.
- The device that helps you escape awkward moment (when you want to end a conversation, just press the button so you can mimic the actions of someone calling you and make excuse).
- ...


This was what the device's circuit should look like!
![PCB real flip](https://github.com/L1uv1a/GPS-SMS-rescue-device/assets/132589125/4035cf09-5ab0-4aac-8a18-fb554da0d8e6)

However, it was burned. From a complicated, high-level project, we had no choice but to use whatever left, became a simple project with 3 modules, a button, and a few wires.
Here it's what left. With this prototype, we can only test at fuctioning level (code and logic) but not as device level (energy consumption, size,...)
![Board](https://github.com/L1uv1a/GPS-SMS-rescue-device/assets/132589125/d5722c64-9fde-47c9-ac74-ce0798fd5b08)

# My work
This is a team project, we have done it in 2 months.
Although my main part in this project is code and team leader, yet the most annoying problems are in electronics parts. So, I just kinda did both, code and electronics.

 
# Technology
Nothing fancy just
- Arduino and microcontroller
- PCB
- Soldering components
- USB charging
- 2G (SMS and Call)
- GPS

# Challenge
- The first one is power - energy suplies. Because of that our second prototype has been burned down and we are ordering new part, so we do not have demo nor picture yet. (Don't worry, it has work, it was just burned down because we change battery - the new battery was too strong).
- The second challenge is soldering components, we have most of its done, until the device for soldering too strong for SIM part, so it destroyed the SIM part.
- The third challenge is bad component. Our SIM IC firmware is fake, so we have to change it completely.
- The forth problem is GPS, it cannot recieve location when you in house.
- The fifth problem is PCB, design it was such a hard job. Even when you make the PCB, you only have 2 choices. One is doing it by ourself, it will cost less money but you have to deal with chemicals, acid, high heat,... . One the other hand, you can send the PCB design to a company, so they would make the PCB for you. The downside was you have to wait for days (even weeks) and it expensive.
- The seventh problem is the PCB itself, the company we choose make us kinda poor quality one.
- The eighth problem is money. Yes! Money! Different from code only or programming project, our project is a fully function device. The prototype making has cost us 2.000.000 dong (12000 yen) (and now even more).
- The nineth problem is that, this is the first time we make a complete device (not just code or simulation), our member have no experience, so that no one understand the best way to do it.
- The tenth problem is satellites. In order to receive your GPS location, you need at least 4 satellites to have exact location. Therefore, sometime you cannot receive your location at all.
- And even more small problems yet if I list in here it will be too long.

# How to build
All you need is change your phone number in code, then import the code to the arduino, use the appropriate energy supplies. If you want to make the whole devive, then you have to make the PCB and then soldering the components.

# How to use
It's really long, so here is the video.
Link: https://drive.google.com/file/d/1xSD7UWpj91eZNVPeuZxQZ10y7QgZRnc9/view?usp=sharing

# P/S
At the moment, the whole device has burned down, so we have no better way to show how it works and its function or even picture. We will update as soon as posible.
This project is more like a idea/testing rather than a complete device.

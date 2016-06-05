[BACK to START](../)

[FINAL PROJECT](../final) / [WEEK 1](../week1) / [COMPUTER AIDED DESIGN](../week2) / [COMPUTER-CONTROLLED-CUTTING](../week3) / [ELECTRONICS PRODUCTION](../week4) / [3D SCANNING & PRINTING](../week5) / [ELECTRONICS DESIGN](../week6)  / [COMPUTER-CONTROLLED MACHINING](../week7) / [EMBEDDED PROGRAMMING ](../week8) / [MECHANICAL DESIGN](../week9) / [MACHINE DESIGN](../week10) / [INPUT DEVICES](../week11) / [3D MOLDING AND CASTING](../week12) / [OUTPUT DEVICES](../week13) / [COMPOSITES](../week14) / [EMBEDDED NETWORKING & COMMUNICATIONS](../week15) / [INTERFACE AND APPLICATION PROGRAMMING ](../week16) / [APPLICATIONS AND IMPLICATIONS ](../week17) / [INVENTION, INTELLECTUAL PROPERTY, AND BUSINESS MODELS](../week18) / [PROJECT DEVELOPMENT ](../week19)  


# Week 10 - MACHINE DESIGN

 April 6 - April 13

[Lecture](http://academy.cba.mit.edu/classes/machine_design/index.html), [Video](http://archive.fabacademy.org/archives/2016/master/videos/04-06/index.html)

~~~
*Weeks Assigment*

This week was a group project.

* automate your machine
* document the group project and your individual contribution


~~~

To automate our primograph we decided to use a rasbperry pi and a motor controller board. The complete documentation you find on the group page. Here you can find my part of the project and a little introduction using the pi and the explorer hat.


## Bill of Materials


* Raspberry Pi 3
* Explorer Hat Pro
* 2 X DC Motors 
* Push Button with LED
* Software to burn the raspberry pi image ([PiBaker](http://www.tweaking4all.com/hardware/raspberry-pi/macosx-apple-pi-baker/))

## Design


The idea is to hit a button and in the middle of our Primograph and be able to change the speed of the motors. 


## Eletronics preparing the Pi

Make a schematic in Fritzing. 



## Python Code


The Explorer HAT uses an output driver chip called the [ULN2003A](http://www.st.com/web/en/resource/technical/document/datasheet/CD00001244.pdf), which contains a set of transistor pairs called a Darlington Array. It transforms the small logic signal of the Pi into something capable of driving much bigger loads, such as motors, steppers, lights and more.


After a couple of ours wondering why my output does not work I found this:

> The 4 outputs on Explorer can sink 5V, but not source. This means you need to connect your load to one of the 5V pins, and then to the output. When you turn the output on it will connect your circuit to ground, allowing current to flow and your load to turn on. This is the opposite of using a bare Pi GPIO pin, where you might connect to the pin and then to ground; keep this in mind!

In the meantime I have already connected the Button and the Led of the Button to MISO and MOSI. 

For the 



## Motor

Also I looked at the Data Sheet of the Motor Driver with is a Dual [H-Bridge](https://en.wikipedia.org/wiki/H_bridge) Current Control Dribver [DRV8833PWP](http://www.ti.com/lit/ds/symlink/drv8833.pdf) and I realized that I could not only control DC Motors but also Stepper Motors and I am also able to control my speed with [PWM](https://en.wikipedia.org/wiki/Pulse-width_modulation) which is the technique by which you control the speed by turning the motors on an off very fast. 


These are the commands for the Motor I can use. 

invert() - Reverses the direction of forwards for this motor
forwards( speed ) - Turns the motor "forwards" at speed ( default 100% )
backwards( speed ) - Turns the motor "backwards" at speed ( default 100% )
speed(-100 to 100) - Moves the motor at speed, from full backwards to full forwards


## Arcade Button





## Conr

# Make everything boot on startup

Because I wanted to make the pi batterie powered. 


To set up the Explorer Hat 

Here is the function [refecence](
https://github.com/pimoroni/explorer-hat/blob/master/documentation/Function-reference.md)

## Project Files

[Download](https://drive.google.com/file/d/0B3iYmii-HJ7TbEQ3NXBKNlZUTlk/view?usp=sharing) all project files from this assigment from my Google Drive.

## Learnings

* read documentation all details of a documentation 
* finally made a shematic in Fritzing

## Feedback

[Twitter](http://www.twitter.com/andreaskopp) me or [email me at andreasrkopp at gmail dot com](mailto:andreasrkopp@gmail.com).


Or chat with me on gitter.

[![Gitter](https://badges.gitter.im/ARKopp/fabacademy2016.svg)](https://gitter.im/ARKopp/fabacademy2016?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)


[BACK to TOP](../week10)
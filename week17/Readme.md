[BACK to START](../)

[FINAL PROJECT](../final) / [WEEK 1](../week1) / [COMPUTER AIDED DESIGN](../week2) / [COMPUTER-CONTROLLED-CUTTING](../week3) / [ELECTRONICS PRODUCTION](../week4) / [3D SCANNING & PRINTING](../week5) / [ELECTRONICS DESIGN](../week6)  / [COMPUTER-CONTROLLED MACHINING](../week7) / [EMBEDDED PROGRAMING ](../week8) / [MECHANICAL DESIGN](../week9) / [MACHINE DESIGN](../week10) / [INPUT DEVICES](../week11) / [3D MOULDING AND CASTING](../week12) / [OUTPUT DEVICES](../week13) / [COMPOSITES](../week14) / [EMBEDDED NETWORKING & COMMUNICATIONS](../week15) / [INTERFACE AND APPLICATION PROGRAMMING ](../week16) / [APPLICATIONS AND IMPLICATIONS ](../week17) / [INVENTION, INTELLECTUAL PROPERTY, AND BUSINESS MODELS](../week18) / [PROJECT DEVELOPMENT ](../week19)


# Week 17 - APPLICATIONS AND IMPLICATIONS (WIP)

May 25 - June 2


[Lecture](http://academy.cba.mit.edu/classes/interface_application_programming/index.html), [Video](http://archive.fabacademy.org/archives/2016/master/videos/06-01/index.html
)

~~~


*Weeks Assignment*  

propose a final project that integrates the range of units covered:

* what will it do?
* who's done what beforehand?
* what materials and components will be required?
* where will they come from?
* how much will it cost?
* what parts and systems will be made?
* what processes will be used?
* what tasks need to be completed?
* what questions need to be answered?
* what is the schedule?
* how will it be evaluated?
 
projects can be separate or joint, but need to show individual mastery of all of the skills
   where possible, you should make rather than buy the parts of your project
~~~


## What will you do?

I want to make a low cost fablabable skateboard and bike speedometer.  

## Who's done what beforehand?

I first looked if there where any kickstarter campaigns. I found one not successful skateboard speedometer campaign and two bike speedometer campaigns.

* [***Skateboard GPS Speedometer - The Lancaster***](https://www.kickstarter.com/projects/1130221580/skateboard-gps-speedometer-the-lancaster)

This campaign raised 3.562 $ AUD but was canceled. It uses GPS to calculate the speed and there is also a bluetooth version. It has a 3 digit Display and also has a button. I think the 3 digit display does not look good in a product and its way to chunky. Maybe it would be better with small display. But then it would be maybe not so visible. This is also made for longboard downhill riding.


![](./images/screenshot1.jpg)
![](./images/screenshot2.jpg)


* [***VeloCityLight - The Intelligent Speedometer Bike Light***](https://www.kickstarter.com/projects/euanmackenzie/velocitylight-the-intelligent-speedometer-bike-lig?ref=nav_search)

This is a bike speedometer that displays the speed to the cars behind you. It has two digit display and uses a 1700 mAh Lipo and is USB rechargeable. It raised 11 000 Pound but was not successful. It also has a ANT wireless chip to connect to a magnetic sensor in the spoke. I really like that strategy. 

![](./images/screenshot3.jpg)
![](./images/screenshot4.jpg)
![](./images/screenshot5.jpg)

 
* [***OMATA One: Analog GPS Speedometer***](https://www.kickstarter.com/projects/omata/omata-one-analog-gps-speedometer/comments)

They are using a 800 mAh Lipo Battery and calculate the speed with GPS. Really nice design. There is also a BLE module integrated but they do not have an app for that yet. For charing they have a USB-C connector and a lipo charging.


![](./images/screenshot7.jpg)
![](./images/screenshot6.jpg)


There are also quite a few indigogo campaigns .. 

* [SpeedForce -The World's Smartest Cycling Computer (400,000 USD, successful)](https://www.indiegogo.com/projects/speedforce-the-world-s-smartest-cycling-computer#/)
* LIMITS: The World's Smartest Cycling Power Meter, (509,000 USD, successful)


And also instructables for skateboard and bike speedometers: 

* [Arduino Skateboard Speedometer](http://duino4projects.com/arduino-skateboard-speedometer/)
* [Skateboard Speedometer by Invented](https://hackaday.io/project/10286-skateboard-speedometer-by-invented)
* [Skateboard Longboard Speedometer Project](http://www.creative-science.org.uk/longboard_speedo.html) 



## What materials and components will be required?  What is their cost?

I am not sure about all components yet because I have not designed the PCB but these are the components I most likely will need. I am thinking about a version with and without a lipo battery. 


***Version A (with Lipo)***

Part                 |  Quantity         | Total                  |
-------------------- |------------------ |----------------------- |
Attiny45V 			 |        1          |       1.23 €           |
hall effect sensor   |        1          |       1.77 €           |
10k Resistor         |  		1	        |           ?            |
1uF Capacitor        |      	1			  |           ?            |
Bluetooth Modul        |      	1	     |        6.95            |
USB	Connector         |        1          |         ?              |
Lipo Charger Adafruit|        1          |        6.95 €          |
LipBattery 2000mAh   |        1          |       12.95 €          |
Smoothcast 305       |      200 g			 |          ?             |
little neodyne magnet|        1		    |         ?              |
***TOTAL*** 			 |             	    |      ***22.90 €***     |

***Version B (with Coin Battery)***

Part                 |  Quantity         | Total                  |
-------------------- |------------------ |----------------------- |
Attiny45V 			 |        1          |       1.23 €           |
hall effect sensor   |        1          |       1.77 €           |
10k Resistor         |  		1	        |           ?            |
1uF Capacitor        |      	1			 |           ?            |
Bluetooth Modul      |      	1	        |        6.95            |
			           |        1          |         ?              |
                     |        1          |                        |
                     |       1          |                       |
Smoothcast 305       |      200 g			 |          ?             |
little neodyne magnet|        1		    |         ?              |
***TOTAL*** 			 |             	    |                        |



## Where will they come from?

I hope I can find most electronic parts are in the [fab academy inventory](https://docs.google.com/spreadsheets/d/1U-jcBWOJEjBT5A0N84IUubtcHKMEMtndQPLCkZCkVsU/pub?single=true&gid=0&output=html). I can source them from digikey or amazon. In the future I will also buy parts from ebay because of the high shipping cost of digikey. Also I got some bamboo for the Skateboard and just got the wheels, bearings and axles from my old Penny board. In the future I plan to do all components of the skateboard myself and only by the bearings.

## What parts and systems will be made?


* Board
* PCB with Attiny and Bluetooth
* Hall Sensor close to wheel connected with cable to Attiny
* iPhone App



## What processes will be used?

* 3D Design
* Mechanical Design
* 3D Printing
* PCB Designing
* Soldering
* Embedded Programming
* CAM
* Molding and Casting
* Composites
* Application Programming 
* iOS and Android Programming
* Interface Designing

* optional: Casting the wheels and the rims, 3D Printing the board

## What tasks need to be completed?


* Sourcing and deciding on all components
* 1st Arduino Prototype
* Get the Hal Sensor on a little breakout board close to the wheel
* Programming Arduino Code
* Design App
* Programm App
* Designing and Making Weather Proof Enclosure


## What questions need to be answered?

How to power the sensor board. Will I use a lipo or a coin battery? How to communicate between the board and the app. Bluetooth or wifi? Or do i also integrate a tiny screen. Is a Attiny enough or a Atmega? Do I include a Lipo charger

## What is the schedule?

6 - 12 June: 1st Arduino Prototype Programming Interrupts, Attiny Board Design, Soldering

13 - 17 June: 3D Printing, Molding and casting water proof case iphone and Anroid App Programming

17 - 30 June: Long Board, Medium Board, Milling and Composite, Improving, Add Power drill Motor

30 - 8 July: Finish Documenting 


## How will it be evaluated? 

I think that means. How do I know if I have succeeded or failed?

For me I already learned so much in the last 5 month. I want to have a fist working prototype of the whole system I can then take and make workshops with it and improve up on that. 


## Feedback

[Twitter](http://www.twitter.com/andreaskopp) me or email me at [andreasrkopp at gmail dot com
](mailto:andreasrkopp@gmail.com).

Or chat with me on gitter.

[![Gitter](https://badges.gitter.im/ARKopp/fabacademy2016.svg)](https://gitter.im/ARKopp/fabacademy2016?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)


[back to top](../week19)


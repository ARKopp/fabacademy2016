[BACK to START](../)

[FINAL PROJECT](../final) / [WEEK 1](../week1) / [COMPUTER AIDED DESIGN](../week2) / [COMPUTER-CONTROLLED-CUTTING](../week3) / [ELECTRONICS PRODUCTION](../week4) / [3D SCANNING & PRINTING](../week5) / [ELECTRONICS DESIGN](../week6)  / [COMPUTER-CONTROLLED MACHINING](../week7) / [EMBEDDED PROGRAMMING ](../week8) / [MECHANICAL DESIGN](../week9) / [MACHINE DESIGN](../week10) / [INPUT DEVICES](../week11) / [3D MOLDING AND CASTING](../week12) / [OUTPUT DEVICES](../week13) / [COMPOSITES](../week14) / [EMBEDDED NETWORKING & COMMUNICATIONS](../week15) / [INTERFACE AND APPLICATION PROGRAMMING ](../week16) / [APPLICATIONS AND IMPLICATIONS ](../week17) / [INVENTION, INTELLECTUAL PROPERTY, AND BUSINESS MODELS](../week18) / [PROJECT DEVELOPMENT ](../week19)  


# Week 4 - ELECTRONICS PRODUCTION

Februar 17 - Februar 24

[Lecture Link](http://academy.cba.mit.edu/classes/electronics_production/index.html), [Video Link](http://archive.fabacademy.org/archives/2016/master/videos/02-17/index.html)

~~~
*Weeks Assignment*


* Make the programmer board
* Stuff with components
* program it
* Show how you made the board
* Explain any problems and how you fixed them
* Included a ‘hero shot’ of your board



~~~

This assignment to make the FabISP board was one of the hardest to complete for me. I never milled in my live nor made a PCB myself or soldered SMD components!

The FabISP is an in-system programmer vor AVR microrontollers. It allows you to programm the microcontrollers on other boards you will make during Fabacademy. Normally this thing would cost you like 30€ or you would need to build one with an arduino. 

I first tried to mill the board on the CNC Machine in the Fablab Munich but the machine broke when machining the board and also the traces were uneaven because I used the wrong double sided tape and the material was not perfectly flat. 

So as a second try I successfully etched the board. 

## Ordering Components and Base material

The SMD components for the board I ordered from [Digikey](http://www.digikey.de/). I found out that you have to pay 18€ shipping but its free at a order of 65€ so I recommend you order all your materials for the course at once. Here is again a list 

I then ordered [160X100 mm Photo PCB, laminated paper, single-sided, 1.5 mm ](https://www.reichelt.com/FPH1-160X100/3/index.html?&ACTION=3&LA=446&ARTICLE=159513&artnr=FPH1+160X100&SEARCH=Photo+PCB%2C+laminated+paper) from Reichelt. This so called "Hartpapier" or laminated paper or phenolic paper it is a compound of paper and Phenol-Formaldehyd-Resin (Phenoplast). 

I realized what I ordered was FR2 and not FR1 what Neil recommended us to order for milling. At the vendors here in Germany I could only find FR2 and FR4. According to wikipedia FR1 is a cheaper Version of FR2. FR means flame retardant btw. 

Why should we use FR1/2 for milling? 

Unlike FR4, the now most common PCB material used, FR1/2 is easier to mill and does not generate dangerous glass-shad dust when milled as it is not fiberglass based like FR4. On the other hand as it is paper-based you can image it is not very durable and is not as water resistant as FR4. According to [wikipedia](https://de.wikipedia.org/wiki/Leiterplatte) FR4 also has a better Kriech-stromfestigkeit und bessere Hochfrequenzeigenschaften. As we are using the material to make PCBs for Prototyping (max 10 - 20 pieces) and then when we have a working design send it off to a PCB House for production with FR4 that is fine. 

![](./images/screenshot1.jpg)


This is is a great [overview](http://www.leiton.de/pcb-faq-9;40.html) of the different FR types. 

![](./images/screenshot3.jpg)

The overview states that FR1 is an obsolete material but I found the because of the Othermill and Inventable Carvey it is having a comeback in the US.

![](./images/screenshot4.jpg)




I did not find FR1 in Germany put I found FR2 boards from [Rademacher](https://www.buerklin.com/default.asp?event=ShowArtikel(12H148)&context=%7b%22subset%22%3a0%2c%22sel%22%3a%22P%22%2c%22patchid%22%3anull%2c%22taglist%22%3a%5b%22L%C3%B6ttechnik%2fEntl%C3%B6ttechnik+und+Leiterplatten%22%2c%22Platinen%22%2c%22Rademacher%22%2c%22Kupferplatten%22%5d%2c%22pagecount%22%3a100%7d&l=d&jump=ArtNr_12H148&ch=87463), Bungard and ProMa. I suggest you ordder the smallest PCB you can find like a 100 x 50 mm so you do hot have to cut so much material away.

I ordered from [Conrad](https://www.conrad.de/de/platinen-basismaterial-o2512060.html?filterMaterial=Hartpapier&filterAusf%C3%BChrung=einseitig&filterFotobeschichtung=ohne&followSearch=9607) and also ordered some FR4 to understand the differences. 



 

## 1. Try - Milling with Wabeco CNC 

I had a friend from the Fablab Munich that helped me with the CNC Machine (Wabeco F1200 – F1200). Thanks Toni! These are the steps to mill a board on this CNC:

1. Download the blackandwhite image of the board
2. open fabmuldes
3. put then correct paremters
4. put gcode on stick
5. put gcode in cnc 
6. first we milled a piece of pvc to have a flat service
7. then we put in the head to mill the board
8. but in the board and glue it on the pvc with double sided tape
9. check if everything is flat
10. check your result 

As you can see the result was not gut. It took away to much on the one side and to view on the other side. I think the reason was that the PCB was not flat and we used not the correct double sided tape. After that the cnc had a defecet so I could not try it again. 

![](./images/fraese_1.jpg)

![](./images/fraese_2.jpg)

![](./images/fraese_3.jpg)

![](./images/fraese_4.jpg)

![](./images/fraese_5.jpg)

![](./images/fraese_6.jpg)

![](./images/fraese_8.jpg)

![](./images/fraese_7.jpg)



## 2. Try - Photo Etching

As I was not successful machining the board and I could not try it a 2nd time because the mill in the Fablab still was not working I tried to etch the board with a help from a friend. 

Some good tips I got from [this tutorial](http://thomaspfeifer.net/platinen_aetzen.htm). 

This is the process that worked for me. Please also check all safety precautions specified on the equipment. 

### Bill of Material

* [UV Lamp](http://www.reichelt.de/FPH1-100X50/3/index.html?ACTION=3;ARTICLE=22190;SEARCH=UV-BELICHTER%201)
* [FR2 PCB with Photoresitant Layer 100 x 50 mm](http://www.reichelt.de/FPH1-100X50/3/index.html?&ACTION=3&LA=514&ARTICLE=159510)
* Transparent Foil 
* [Developer (Natriumperoxid) ](http://www.reichelt.de/?GRUPPE=C95)
* [Etachant](http://www.reichelt.de/Aetzmittel-Entwickler/AeTZMITTEL-400G/3/index.html?&ACTION=3&LA=3&ARTICLE=23423&GROUPID=3375)
* [Etch Device](http://www.reichelt.de/-TZGER-T-1/3/index.html?&ACTION=3&LA=446&ARTICLE=23418&artnr=%C3%84TZGER%C3%84T+1&SEARCH=%E4tzger%E4t)
* [PCB Holder](http://www.reichelt.de/Aetzgeraete-Belichter/PLATINENHALTER-2/3/index.html?&ACTION=3&LA=2&ARTICLE=25479&GROUPID=3376&artnr=PLATINENHALTER+2)
* [Gloves](http://www.reichelt.de/?ARTICLE=98800)

### Layout

I saved the board as png and used fabmodules to invert the board so that the traces would be black. Then I opened the board in iDraw and resized the board to 22.987 mm x 45.214 mm and exported the images as pdf. Also I mirrored the design so that there is no gap between the light source and the foil but I did not see a difference. I am not completely sure if I got the correct size but I hope. 


![](./images/screenshot6.jpg) 

![](./images/traces_black.jpg)

I then opened pages and put the imported the files there and printed it in the highest resolution on a transparent foil. 


### Exposure 

I cut out the prints out of the foil, dimmed the lights and peeled of the protective film of the PCB and stuck the foil with the PCBs on it with tape. You need to make sure that they are flat on the board. Then put the board down on the UV lamp for exposure with the side with the designs. 

I exposed it for 3 Minutes. I think that I used a 32W UV Lamp.

 
![](./images/etch4.jpg) 

### Development


Then I put on some rubber cloves and pealed of the protective foil and put the boards into a tray with developer. You can buy it as a powder as you have to make it french every time you want to use it. 

![](./images/etch5.jpg)

### Etching (Ätzen)

Then I put the board into the etchant.

The first two boards I tried to etch did etch perfectly because some lines where not visible. I think the problem was I had not printed the design with the highest resolution. The etching took about 10 minutes. Also you can move the board around a bit so it the boards gets some ear and it etches faster. 
 
![](./images/etch3.jpg)

![](./images/etch0.jpg)

This was a failure. You can see that some lines are not visible. 

![](./images/etch6.jpg)

These boards worked. But on the right side they etched much faster then on the other side. I think that was because all the bubbles where on the one side. 

![](./images/etch1.jpg)

### Postprocessing

As a last step I cut the board with a dremel and cleaned it with alcohol. 

![](./images/etch2.jpg)


This is a pretty time consuming step and I did not get a perfect result. Next time I would use a [small table saw](http://www.amazon.de/Proxxon-27006-Tischkreiss%C3%A4ge-KS-230/dp/B000LNC7SY/ref=sr_1_2?ie=UTF8&qid=1458575314&sr=8-2&keywords=mini+tisch+s%C3%A4ge). Also I read that some people are just using the 0.5 mm boards and cut them with scissors.

![](./images/etch8.jpg)

Here are my finished boards. 


![](./images/etch9.jpg)


After completing this process I also found a great [tutorial](http://www.reichelt.de/reicheltpedia/index.php/%C3%84tzen) in German about etching from Reichelt where you can also buy all the equipment. Also the alternative would be the Toner Transfer Method where you do not have to to the Exposing and the  development but use a hot iron to iron the design onto the board.

## 3. Try at Fablab Barcelona with: Milling with the Roland 

*Update 9. April:*  During my stay at the Fablab Barcelona I finally successfully milled the board with the Roland mill there. I won´t explain the process in Detail but here are some pictures. 

1. Get the traces and outline png from the fabacademy website
2. put it into fabmodules
3. Select Roland mill
4.  6 times 0
5. Generate and save
6. Save file in cloud
7. got to mill
7. Save file in your folder on the computer connected to the mill
8. Prepare Mill
9. Make sure FR2 is really straight with an angle
10. Bend straight if necessary
11. Mill a MDF piece before so you have a good surface
12. Clean MDF pice you are sticking your Board to
13. Stick it with a double sided tape
14. Make Sure that there are no bubbles
15. But in 1/64 mill for traces
16. Move mill down and to the left front side where you have put your board and then open the mill srew that it touches the board
17. Zero X/Y and Z
18. Load Png 
19. Close Mill
20. Start Milling
21. Check if the mill milled deep enough with View
22. Repeat with the outline of you board
23. Take out

![](./images/fablab7.jpg)
![](./images/fablab1.jpg)
![](./images/fablab2.jpg)
![](./images/fablab3.jpg)
![](./images/fablab4.jpg)
![](./images/fablab5.jpg)
![](./images/fablab6.jpg)



## PCB Houses

Also I wanted to use this assignment to do some research abut PCB Houses. I asked around and I found what my network here in Munich is using. 

They used the following [DirtyPCBs](http://dirtypcbs.com/), [Seedstudio ](http://www.seeedstudio.com/depot/) and [Eurocircuits](http://www.eurocircuits.de/).

So I made a account with Diry PCBs and found out that you best give them Eagle Files. Also I had a look at book I had lying around called Make your Own PCBs with EAGLE from Simon Monk.

## Machining with iModela 

I borrowed an iModela but did not have the time yet to use it but I will give it a try soon. 

Here are some turotials I found: 

http://garage-lab.de/allgemein/der-japanische-neuzugang-roland-imodela/


Coming soon. 


##  CO2 Laser Cutter

Also you can make a PCB by [covering the board with a resist](
http://makezine.com/2007/01/22/how-to-use-a-laser-to-etc/) and then lasering the resist away. 


Also seems you even can cut a [PCB directly](http://makezine.com/2013/01/25/making-circuit-boards-with-a-low-wattage-laser-cutter/) with the Lasercutter. I will give it a try soon.


## 5. Make a PCB with a Fiber Laser

With a fiber laser you can remove the copper of the PCB and then cut holes with the CO2 Laser.  Here is a [tutorial](http://fabacademy.org/archives/2015/doc/fiber-laser-cutting-pcb.html). 


## 6. PCB Laser Structuring

There is also method of directly lasering a PCB with a method called [laser structuring](http://www.lpkf.de/produkte/rapid-pcb-prototyping/laserstrukturierung/laser-strukturieren-leiterplatten-prototypen-kleinserien.htm). ["PCB Structuring at the speed of light"](
https://www.youtube.com/watch?v=1F8qZL5eXIs) it says in their video.

There is a initiative in the Fablab Munich to build one of those and do it as a Open Source project. One of those machines from LPKF is $ 220.000, looking forward to a maker version of this machine. 


## 7. Make a PCB with a 3D Printer

Another innovation I am looking forward to are PCB 3D Printers like the [Voltera](https://www.dropbox.com/s/r84mr534mk8wnlw/Screenshot%202016-03-21%2002.39.09.png?dl=0). Its not shipping yet but I can imagine that in future academies some of the students will use one of these machines. 

Also I find a guide how to [modify an ultimaker](http://www.g3gg0.de/wordpress/uncategorized/um2-laser-addon/) and [build a Laser Exposer yourself.](http://hackaday.com/2012/08/09/exposing-pcbs-with-a-home-made-laser-printer/).


## Soldering

Enough with all the different methods of making a PCBs. Let´s get to soldering.

I first looked at a [SMD soldering guide](https://www.youtube.com/watch?v=b9FC9fAlfQE) on Youtube and went to [Layda Adas page ](http://www.ladyada.net/library/metertut/continuity.html) for more Soldering Tipps. A great overview of SMD Soldering Tipps I found at [Microkontroller.net.](http://www.mikrocontroller.net/articles/SMD_L%C3%B6ten#Kontrollieren_von_L.C3.B6tstellen).

These tools you need. I had to buy a couple as I did not needed them before:  

* a Soldering Iron I used [this](http://www.amazon.de/Weller-WEL-WS81-SOLDERSTATION-ANALOG-80W/dp/B0015G2FEC/ref=sr_1_2?ie=UTF8&qid=1458652139&sr=8-2&keywords=weller+l%C3%B6tstation) 
* [Solder Sn60 Pb40  0.5 mm helps with SMD components](https://www.reichelt.com/index.html?ACTION=3;ARTICLE=10989;SEARCH=L%C3%96TZINN%200,5MM)
* Desoldering Braille
* [Good tweezers](http://www.amazon.de/s/ref=nb_sb_noss?__mk_de_DE=%C3%85M%C3%85%C5%BD%C3%95%C3%91&url=search-alias%3Ddiy&field-keywords=SMD-Pinzette)
* 3rd Hand with magnifying glass
* also I bought this [Hot Air Station from Aoyue ](http://www.amazon.de/dp/B004CXXER2?psc=1)
* Flussmittel
* Solder Tips 0,8 and 1,3 mm 

This is the parts view of the board.

![](./images/components_res.jpg)

*Update 8 April:* 

For my second board with that I did with the Roland mill in the Fablab Barcelona I used the the othe version of the board that includes the two Capasitors. 

![](./images/hello.ISP.44.png)

These are the parts you need:

* 1 x ATTiny 44 microcontroller
* 1 x 6 pin header
* 1 x Crystal 20MHz
* 2 x Zener Diode 3.3 V
* 2 x Capacitor 10 pF
* 1 x Capacitor 1uF
* 1 x Resistor 499 ohm
* 2 x Resistor 100 ohm
* 1 x Resistor 1K ohm
* 1 x Resistor 10K
* 2 X 0 ohm resistors
* 1x  USB connector


I put all the parts on a double sides tape and started soldering the chip and went from the middle to the outside. After soldering I found [this](http://archive.fabacademy.org/archives/2016/doc/electronics_production_FabISP.html#troubleshooting) guide and learned that I should have soldered the USB first and then the chip. Also I realized that the diodes have a polarity. They have a very small line you can barely see on the cathode side. Luckily I soldered them corretly.  

The solder joints need to be nice and shiny. At my first try I was not sure if I used the right combination of soldering tip (I used a 2.4 mm tip and 1.0 mm solder ). Later I found out its better to use a 1.5 mm tipp and a 0.5mm solder. Some also say its completeley a matter of preference.

![](./images/etch10.jpg) 


Here is my first result. What do you think? 


![](./images/etch11.jpg) 




## Check Board

Get out your multimeter and check if your board is soldered correctly.

*Update 9. April:*  

Ferdi showed me a great process to check if the board is soldered correctly. 

1. First visual control without and then with magnifiny glass if there are any left over solder pieces
2. Then check if ground and vcc is not connected
3. check if all the ground and vcc lines runs trough correctly
4. check all the pins of the USB connect 
5. check all the pins of the chip and the connector
6. check if neither of the pins connect to each other

I had a couple of Fails:

* I connect some pins together with some left over solder
* I conneced some traces together

To solve these fails I just heated up the solder iron again and fixed them until I did not have any shorts again.


## Programming

To Program the ISP needed the following: 

* [AVR-ISP MK2 Programmer](https://www.reichelt.com/index.html?&ACTION=446&LA=2)
* 1 x usb mini cable
* 1 x ribbon cable
* 2 x 6 pin connectors
* FabISP Firmware
* [Cross Pack AVR](https://www.obdev.at/products/crosspack/download.html)

Then I followed [this steps](http://archive.fabacademy.org/archives/2016/doc/programming_FabISP.html) to program the chip to become a FabISP. Make sure that you check where Ground is before you connect the cable. 

You need to open the Terminal in the folder you downloaded the Firmware to. 

```
make clean
make hex
make fuse
make program
```


I used a DIAMEX-Prog S but I late saw that I have to install some drivers so I am waiting for my [AVR ISP from Atmel.](http://www.amazon.de/Programmer-USB-AVRISP-XPII-Compatible/dp/B00KM6ZA9I?ie=UTF8&psc=1&redirect=true&ref_=oh_aui_detailpage_o02_s00).

I got until the fuse part where it said ```make: *** [fuse] Error 1```

![](./images/etch12.jpg) 
![](./images/screenshot7.jpg)


Here some other [students](http://archive.fabacademy.org/archives/2016/fablabbcn2016/students/36/pages/project4.html) that were successful with the programming.  


*Update 9. April:*  

The second version of my board I got the green light on the programmer and I programmed it. I then desoldered the 0Ohm Resistors but it did not show up as a USB Device. I checked the board again and I realized that I had forgotten to solder a Resistor. I then soldered on the resistor I forgot but still it did not show as an USB. 

![](./images/fablab8.jpg)



*Update 10. April:* 

Finally on Sunday in Vallauda I soldered the 0Ohm resistors on again. First I did not find any so I used some wire which was a mistake because I also soldered the copper trace underneith together. But finally after another try I got the green lite and tada I could see it as a USB. You can see this Window by Clicking on the Mac Logo>About this Mac>Systembericht>USB.


![](./images/screenshot8.jpg)


And this is my hero shot of my working FabISP. 

![](./images/heroshot.jpg)

Me on the way back down from the Valldaura.

![](./images/heroshot2.jpg)

## Learnings

* How to check a board for shorts 

* Desolder with hot airgun. Hold object that you do not want, heat up object with hot airgun, the other part will fall down.  

* Cut traces with knife, add jumpers. 

* Use Airdrop to transfer files from my i-phone to the computer and this documentation. 

* Clean board with steelwool and then clean with soap. 

* heat copper board and componet first then add solder

* dont move soldering iron around too much

* when resoldering a joint add more solder for flux


## Project Files

Download all project files from this assignment from my [Google Drive foler.](https://drive.google.com/open?id=0B3iYmii-HJ7TSjJlNzN3SXVEa1U).

Note to me: Need to put the Fabmodules file here. 


## Feedback

[Twitter](http://www.twitter.com/andreaskopp) me or [email me at andreasrkopp at gmail dot com](mailto:andreasrkopp@gmailcom).
[BACK to START](../)

[FINAL PROJECT](../final) / [WEEK 1](../week1) / [COMPUTER AIDED DESIGN](../week2) / [COMPUTER-CONTROLLED-CUTTING](../week3) / [ELECTRONICS PRODUCTION](../week4) / [3D SCANNING & PRINTING](../week5) / [ELECTRONICS DESIGN](../week6)  / [COMPUTER-CONTROLLED MACHINING](../week7) / [EMBEDDED PROGRAMMING ](../week8) / [MECHANICAL DESIGN](../week9) / [MACHINE DESIGN](../week10) / [INPUT DEVICES](../week11) / [3D MOLDING AND CASTING](../week12) / [OUTPUT DEVICES](../week13) / [COMPOSITES](../week14) / [EMBEDDED NETWORKING & COMMUNICATIONS](../week15) / [INTERFACE AND APPLICATION PROGRAMMING ](../week16) / [APPLICATIONS AND IMPLICATIONS ](../week17) / [INVENTION, INTELLECTUAL PROPERTY, AND BUSINESS MODELS](../week18) / [PROJECT DEVELOPMENT ](../week19) 


# Week 7 - COMPUTER-CONTROLLED MACHINING

March 9 - March 16

[Lecture](http://academy.cba.mit.edu/classes/computer_machining/index.html), [Video of Lecture](http://archive.fabacademy.org/archives/2016/master/videos/03-09/index.html)

~~~
*Weeks Assignment*

Make Something Big

* Explain how you made your files for machining (2D or 3D)
* Shown how you made something BIG (setting up the machine, using fixings, testing joints, adjusting feeds and speeds, depth of cut etc)
* Described problems and how you fixed them
* Included your design files and ‘hero shot’ photos of final object

~~~


I planned to use the Shopbot in the Makerspace in Munich but the machine was not working in the week I needed it to use so I used the week to research where there are other large wood CNC machines and CNC service providers around Munich and prepare my cutting files. 

I found a course in the [MakerSpace Shop Bot Course ](http://www.maker-space.de/course/37.cnc-002-cnc-holzfraese-shopbot-und-einfuehrung-in-die-software-vcarve-fuer-einsteiger-sgk-c.html) on the 6.4. and that there are workshops as well in the Fablab Zurich.

There is also a [CNC course in the fablab Berlin](https://fablab.berlin/en/workshops/24-cnc-milling-introduction.html) with a BZE PFE 1000 PX for 240 € but the next course will be in the middle of April and when I was in the Fablab Berlin in the week after easter I could not find the time to do a personal introduction.

After looking for alternatives I finally found CNC shop that will let me use the CNC at the end of the week. This was also a great exercises to find out who has a big CNC machine around Munich and who I could work with in the future. I think there is the need of something like [Chop Shop](http://chopshopcnc.com/) that offers CNC and Lasercutting Services for Artists, Designers and Start-ups and Makers that do not have this big machines.

 

![](./images/screenshot3.jpg)

I also looked at platforms like [100k Garage](http://www.100kgarages.com/) in the US and [Fabhub](https://www.fabhub.io/) that list CNC Shops. Laser Cutters and 3D Printers and other Workshops. Unfortunately there are not many listing in Germany yet. 

![](./images/screenshot1.jpg)  
 

I also found [Make Works](http://makeworks.co.uk/scotland/process/cnc-machining) a directory of local fabricators, material suppliers and workshop facilities a the moment in Scotland and Birmingham. I would love to have something like that here in Bavaria. 
 

![](./images/screenshot2.jpg)

To get an idea about prices I asked for a quote of a desk and a stool from [open desk](https://www.opendesk.cc/) that transferred me to a local CNC Shop east of Munich. The estimate was 540 € for two chairs.

***Update 27. April***

I never got a real quote from them. They told me that they did not get a quote from th CNC Shop. 

![](./images/screenshot4.jpg)

![](./images/screenshot5.jpg)


I looked at some other students like [Till ](http://fabacademy.org/archives/2015/eu/students/cremer.till/08.html) and [Helga](http://fabacademy.org/archives/2015/eu/students/hauksdottir.sigridur_helga/W8_computer_controlled_machining.html) and [Paul](http://archive.fabacademy.org/archives/2016/fablabamsterdam/students/90/week7.html) from Amsterdam and also looked at [this site](http://fabacademy.org/archives/2015/eu/students/gunnarsson.thorarinn_b.b/week.8.html) after I heard it in the review. 

Finally I remembered that I have a Booth Builder in my network that has a CNC and I asked if I could do it at his shop.  

## What I'm gonna for this assignment?

For this assignment I wanted to make a [Maker Bench](https://3dwarehouse.sketchup.com/collection.html?id=ub750b5d7-37d7-4479-b8e6-f4532018adb5) and design design some adaption to fit my Ult2go and the Other mill on top of it. 

![](./images/screenshot6.jpg)

For that I need to download the Sketch Up Pro Version and then make my adaptions and export a dxf model. 


### Design and Prototype


*Update 21. April:*

I looked at all the chairs and stools I could find in the fablab and finally decided to make a cnc design of the first stool I build at Fablab Munich.

![](./images/screenshot8.jpg)

I also had a look at [this](http://www.instructables.com/id/50-Digital-Joints-poster-visual-reference/) poster with 50 digital joints. 

![](./images/screenshot9.jpg)

But I never finished my design because I got so busy with the other projects and the final project. 

*Update 28. June:*

In the end I decided not to do a chair or a Maker Bench but to make an open desk for our new erfindergarden location.

![](./images/screenshot10.jpg)

### 3D Modeling in Rhino

I downloaded the files from [opendesk.cc](https://www.opendesk.cc/lean/desk#get-it-made) as a pdf and imported it into Rhino and arranged all the pieces on the 2500 x 1250 board.

Then I made the CAM paths with Rhino Cam and added some holes for screws to screw the pieces to the milling board. Here you have to be very careful that you do not screw the holes in where the mill could touch them. At the second board I have placed them to closely to the mill path and broke a bit. 


![](./images/screenshot11.jpg)


![](./images/screenshot12.jpg)

### Modeling a Box on top of the opendesk

To design something myself and to learn Rhino I decided to design a box that fits on top of the opendesk. 

I got inspired of [this](http://www.instructables.com/id/CNC-Hammer-Joint-Box/) Hammer Joint Box and took it and redesigned the joints for my material thickness.

From the experience of the Fablab Barcelona the joint has to have a gap of 0.2 mm around so that it is press fit. 

I made the joint holes half the material strength plus 2 times 0.2 which resulted in 9,4 mm. The Joint fingers I made 9,4 mm think and the hole 9,8 mm.

I then added a dog-bone filets with 3.1 mm radius to my joint and then exported the g-code to test the joint. More on the CAM process below. 



***Testing Joint***

![](./images/image4.jpg)
![](./images/image5.jpg)
![](./images/image6.jpg)
![](./images/image3.jpg)


### Generating CAM Pathes with Partworks 2.5D


The mill does not understand the design files so you have generate a machine code (g-code). For the last board I used [Partworks](http://partworks.software.informer.com/) and [Rhino Cam](http://mecsoft.com/rhinocam-software/) for this job. Unfortunately these programs are Windows only. So I want to explore other CAM Software later that also work on my Mac or are clowd based. 

Some that I want to look into are:

* [meshcam](http://www.grzsoftware.com/) (MAC and PC)
* [MakerCam](http://www.makercam.com/) (Cloud, import SVG)
* [ArtCam](http://www.artcam.com/express/)
* [easl](http://easel.inventables.com/) (Cloud, import SVG)

To add filets to the design, so the mill can turn I exported the joint as a dxf from Rhino and imported it into Partworks. To get two 2D files out of Rhino you run the commadn _Make2D. 

First you have to select your material in the job setup (mine was 18mm birch plywood) and select you zero point on the top of your stock so you do not cut into the milling board. 

To be able to add the filets you first need to select  "Edit Vectors"-->"Join Open Vectors". Also you have to make sure that you only export one layer out of Rhino and not several. If one of your lines are not connected you will get an eror that your lines are not closed. 


![](./images/image2.jpg)

There are three different types of toolpaths Profile, Pocket and Drilling. Profile is used for cutting the pieces out. Pocket toolpath cuts pockets. Drill toolpaths to make drill holes. 

We can make three different types of Profile toolpath. I always used the Outside profile type. 


![](./images/screenshot13.jpg)


Fist I created a new Tool.

![](./images/image27.jpg)


These where the settings I used in the end.


**Settings** 

Mill: 6mm Flat End  
Pass Rate: 5 mmm
Stepover: 3 mm   
Spindle Speed: 12000 rpm  
Feed Rate: 60 mm/sec
Plunge Rate : 30 mm/sec


Then I created the different toolpaths for drills, my different pockets and the profile in the end I also added tabs to the design. You need taps so the mills does not shoot the little pieces out after the last cut. The total time for the last board was an estimated  2 hours and 13 milling. This includes the drilling paths for the screws. Normally you would use a drill bit for the drill holes but I also used the Flat End 6mm for the drill holes. 

Hit calculate and look at the 3D visualization each time you create a new tool bath. 


![](./images/image28.jpg)


![](./images/image1.jpg)


![](./images/image29.jpg)


![](./images/image30.jpg)


![](./images/image32.jpg)

![](./images/image33.jpg)

![](./images/image34.jpg)


![](./images/image35.jpg)


![](./images/image36.jpg)



## Generating Cam Paths with Rhino CAM

Before making the paths with Partworks i have tried to generate the paths with Rhino Cam for the third board but the program crashed after like 5 hours of working. The steps are similar to Partworks only that you have a couple of options more which is confusing if you are just getting into CAM.

The steps are the following. First position all pieces so you do not have too much unused space on your board and then draw a box around then drew a box around with that has the size of our stock. 

Set the box stock and select the top left corner of your stock as a Zero. 

![](./images/image13.jpg)


First I create the drill paths. So I made circles of 6mm diameter on my board where I thought i would be necessary. Click on 'Select Drill Points' and select the circles.

Then I created a new tool. I selected a mill tool with diameter 6 mm and selecting a standard drilling bit. 

Under 'machine operations' select 'Thread Milling'. 


![](./images/image14.jpg)

![](./images/image15.jpg)

![](./images/image16.jpg)

***Feed and Speed***

I left the RPM and just added 2000, 2000 under feed rates as recommended my my instructor.


![](./images/image17.jpg)

***Clearance Plane***

Creates a safe distance in which the tool moves from cut to cut.
Select 'Automatic' and Clearance Plane. 

![](./images/image18.jpg)

***Cut Parameters***



![](./images/image19.jpg)

![](./images/image20.jpg)

***Sorting**

![](./images/image21.jpg)

After the drill paths I created the Pocket paths and in the end my profile paths. I first had all my 3D layers in the design but I would recommend to only use 2D Designs and use the command Make2D as when I wanted to select my pockets in 3D always some other thing got selected only not my pockets. 

***Advanced Cut Parameters***

Here you can also add your tabs to secure your pieces so it does not fly off. 


![](./images/image22.jpg)

![](./images/image23.jpg)

![](./images/image26.jpg)


If you click on simulate you can see how your paths look like. 

In the end export all paths as g-code. And export two different codes. One for the drilling and one for the pockets and the profile. 

## CNC MILLING 

For milling I used the ShopBot PRSalpha 144 in the Fablab Barcelona. 

I bought 3 sheets of 18mm plywood. On sheet 1 and 2 I milled only the opendesk parts and on the 3rd board I then milled the rest of the parts and my box. These are the settings I used for milling in the end.


I want to get more into CNC so I know I have make test with my own mill and get into these diffrent settings. Here is a great Feed Rates and [Speeds Reference Wiki](http://www.shapeoko.com/wiki/index.php/Materials#Acrylic) from Shapeoko. Here I also found some [settings](https://othermachine.co/support/materials/wood/) for my othermill.

First clean the milling board then place the sheet of plywood on the machine (I aligned it a view centimeres to the right top side) and then home the machine in XY position by opening the yellow console and moving the spindle to the end of your board to X,Y zero and zero it. Make sure that you are traveling over your board and do not run the mill into your board. 

![](./images/image40.jpg)
![](./images/image41.jpg)

Then you home your mill with the z-Autoleveling you put an alligator clip on the spindle and put the metal plate on the board of the mill and not the top of you stock.  

![](./images/image7.jpg)
![](./images/image43.jpg)

You are getting an message from the program that is is zeroed in z-direction. 

![](./images/image44.jpg)

The you start first with you g-code for you drill holes and then drill in the screws and the start your other g-codes. 

**Order of Cutting**

1. Holes for Screws (g-code 1)

2. Pockets of 9mm (g-code 2,)

3. Pockets of 14 mm (g-code 2)

4. Pockets of 18 mm (g-code 2)

5. Profile (g-code 2)
 



![](./images/image45.jpg)

The mill drills the holes for screws. 


![](./images/image46.jpg)

I am screwing in the screws to fix the plywood board to the milling board.

![](./images/image47.jpg)

![](./images/image48.jpg)


Always suck the wood dust out.

These are some pictures of the second board I milled. 

![](./images/image9.jpg)

![](./images/image10.jpg)



## Finishing

After the milling job finished I took out the plywood sheet and cut and turned the sheet over to be able to get the tabs of more easily. I used a knife. Dont forget to clean the mill and all board. Leave no trace!

Then I sanded off all the edges of the pieces and also sanded of the hammer joints. 

![](./images/image50.jpg)

I think I have not used the correct tool for the hammer joint because the cut is not clean. I think I should have used a flat end mill so I would get perfect clean cuts. 

![](./images/image39.jpg)

Also I realized that I have mirrored the two side pieces of the box wrongly so I had to cut off the joints. I will correct this in the final file. 

![](./images/image52.jpg)

So what I did is, I cut off all the joints and hammered them in afterwards in the pockets. Still the sides fit perfectly.

![](./images/image37.jpg)

Todaaaa my final box. It fits on the inside of the opendesk.

## Project Files

[Download](https://drive.google.com/folderview?id=0B3iYmii-HJ7TRTFZNVBoMU8tRXc&usp=sharing) all project files from this assignment from my Google Drive.

## Learnings

* I prefer Partworks over Rhino Cam as I liked the easy 
* use different tools for joints


## Feedback

[Twitter](http://www.twitter.com/andreaskopp) me or email me at [andreasrkopp at gmail dot com](mailto:andreasrkopp@gmail.com).

[![Gitter](https://badges.gitter.im/ARKopp/fabacademy2016.svg)](https://gitter.im/ARKopp/fabacademy2016?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)

[BACK to TOP](../week7)
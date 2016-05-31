[BACK to START](../)

[FINAL PROJECT](../final) / [WEEK 1](../week1) / [COMPUTER AIDED DESIGN](../week2) / [COMPUTER-CONTROLLED-CUTTING](../week3) / [ELECTRONICS PRODUCTION](../week4) / [3D SCANNING & PRINTING](../week5) / [ELECTRONICS DESIGN](../week6)  / [COMPUTER-CONTROLLED MACHINING](../week7) / [EMBEDDED PROGRAMMING ](../week8) / [MECHANICAL DESIGN](../week9) / [MACHINE DESIGN](../week10) / [INPUT DEVICES](../week11) / [3D MOLDING AND CASTING](../week12) / [OUTPUT DEVICES](../week13) / [COMPOSITES](../week14) / [EMBEDDED NETWORKING & COMMUNICATIONS](../week15) / [INTERFACE AND APPLICATION PROGRAMMING ](../week16) / [APPLICATIONS AND IMPLICATIONS ](../week17) / [INVENTION, INTELLECTUAL PROPERTY, AND BUSINESS MODELS](../week18) / [PROJECT DEVELOPMENT ](../week19)  


# Week 12 - MOLDING AND CASTING
April 20 - May 4

[Lecture](http://academy.cba.mit.edu/classes/molding_casting/index.html), [Video](http://archive.fabacademy.org/archives/2016/master/videos/04-20/index.html) 

~~~
*Weeks Assigment*

design a 3D mold, machine it, and cast parts from it

~~~

In the lecture Neil talked about a couple of different casting methods. In this week we are using a process called flexible molding.

The process is like this:

1. Design a postive Mold for Milling in a 3D Program
2. Calculate Machines Paths with a CAM Program
3. Mill the Mold in Wax first rough and the fine
4. Make a flexible negative Mold by pouring in Silicon into the positive Wax mold
5. Let Silicon cure
6. Take out flexible Mold
7. Pour in Ureathen Rubber as a Cast 


Before starting I went to Internets and watched a couple of Molding and Casting videos. There are many different processes and I wanted to get a better overview. 

* [How to make a Lightsaber](https://www.youtube.com/watch?v=DEVi0mEaJJQ)
* [How to make a copy of you favourite toy](http://www.instructables.com/id/How-to-mold-and-cast-an-action-figure-or-anything-/)
* [Silicon Plastique Basic Moldmaking](https://www.youtube.com/watch?v=qDzaMVDIoiQ)
* [Melting Cans with the Mini Metal Foundry](https://www.youtube.com/watch?v=lSoWxG30rb0)


Some videos and Links from Fabacademy Students I also watched: 

* [Molding Castin Class - Woma Paris ](https://www.youtube.com/watch?v=Kt7IygSJOk0)
* [Molding & Casting Slideshare I](http://de.slideshare.net/saveriosilli/molding-and-casting-making-a-mold-with-machinable-wax)
* [Molding & Casting Slideshare II](http://de.slideshare.net/saveriosilli/molding-and-casting-rubber-mold-and-casting-resin)
* [Molding & Casting Lecture](https://www.youtube.com/watch?v=cFBAEsGkgik)
* [Molding and Casting Video from Lima Part 1 (Spanish)](https://www.youtube.com/watch?v=alLUMZ9XqVE&list=UU5mpmKg-6lehx9pbT4QRWbQ&index=14&feature=plcp)
* [Molding and Casting Video from Lima Part 2 (Spanish)](https://www.youtube.com/watch?v=qYsiOXUuS68&list=UU5mpmKg-6lehx9pbT4QRWbQ&index=13&feature=plcp)
* [Molding and Casting Video from Lima Part 3 (Spanish)](https://www.youtube.com/watch?v=nFFu2tsTBYQ&list=UU5mpmKg-6lehx9pbT4QRWbQ&index=12&feature=plcp)
* [Slideshare of the Molding and Casting Lima (English)](http://de.slideshare.net/fablablima/molding-and-casting-part2?next_slideshow=1)

Also I looked at this guide called [the guerilla guide to CNC Machining, Molding and Resin Making.](http://lcamtuf.coredump.cx/gcnc/) that you have to think about the size of your tool and adjust the design accordingly. This made me understand the differences of desiging for 3D Printing and Designing for CNC Machining better. 



![](./images/screenshot5.jpg)

![](./images/screenshot12.jpg)
![](./images/screenshot13.jpg)


## Frist Molding Try

### Bill of Material

I did not take the time to do a proper websearch and went to buy the materials right before closing time at Boesner an German Art Supply Shop that just opened up a new branch in the east of Munich that day.

![](./images/image14.jpg)


* Block of blue Machine Wax I took a piece from Barcelona ([German Supplier](http://www.prevestdenpro.de/PRE10044))
* Silicoform HV from Boesner (to cast)
* Urethan Rubber PGB, Poly-Urethan-Giessharz) ([buy here from Boesner](http://www.boesner.com/plastisches-gestalten/holz-ton-speckstein/sonstige-formmassen-und-zubehoer/giessharz-blockform)
* Hydrostone I found at Dental Shop [buy here](http://www.dentona.de/epages/Dentona.sf/de_DE/?ObjectID=18311&ViewAction=ViewProduct)) (to cast)
* OOMOO 25/1 Silikonkautschuk (to make the mold)
* Smooth-Cast 305/1 Polyurethan (to cast)
* A scale
* some plastic cups
* some wooden stick to mix 
* plastic gloves


After that I looked in the internet and I also found the OOMOO 25 and SmoothCast that Neils recommends were cheaper then the materials I bought at Boesner. So I decided to also order them. 


### Designing the mold

This is the workflow with the othermill. First you design your object in 3D and then you need a CAM Software to generate the toolpath for your mill as a .tap or .nc format. 


Before you start design I measured my wax block. Mine was 144 x 76 mm and 44 mm high. This would not fit into the othermill but into the Roland Mill I will be using in the Fablab Barcelona.

Also you have to think about the bits you will use already when designing your piece. 

I will use a 1/8 (3.175mm) Flat End mill for the roughing part and a 1/32 drill bit (0.7938mm) for the details. So you have to make sure that the mill can enter all the way down so you have to give the walls of you design a little angle.

Also you need to think about the maximum deepnest of your design which is 25 mm for the Roland. So the bit can reach all the way down.   

![](./images/screenshot1.jpg)

I know I finally have to spend 2-3 days with a program like Blender, Rhino or Solidworks or Fusion360 to really understand it and learn all the shortcuts.

In the end I went back to do everthing with tinkercad because I knew I would be faster. I was luoky to find a shape generator from the community with which I could make the angled sides so the mill can get to the bottom. Also I put in a little frame around the inside so the silicon parts fit over each other perfectly and the two parts do not get misaligned. The nice thing about thinkercad is that you can looked at my process with [this link](https://tinkercad.com/things/fdidk7uKTCw) now and can use it for your design.

![](./images/screenshot7.jpg)

![](./images/screenshot8.jpg)

![](./images/screenshot9.jpg)


### Learn a CAM Software

In CNC machining you first design a thing and then you need to use a CAM (Computer Aided Machining) program that transforms your design file into a gcode or nc code that the machine can understand.

I decided to the CAM with Fusion360 and started looking at all the [youtube videos](https://www.youtube.com/playlist?list=PLmA_xUT-8UlK9rndthGGHsjjnZtPO8XRV) about Fusion360CAM. This Software is pretty nice as you have the whole package in one program. 

Also also tried Fabmodules as a CAM Program but I could not download the file yet so I created an issue on github.

***Update 7. Mai 2015:***

Finally the issue with fabmodules was resolved and I installed fabmodules locally again. There is already a process for foam rough cut but I also would like to add wax rough cut. 

[https://github.com/FabModules/fabmodules-html5](https://github.com/FabModules/fabmodules-html5)

```
git clone https://github.com/FabModules/fabmodules-html5.git
```
```
npm install

```

And then start the sever with 


```
npm start

```


and then start the local fabmodules with:

http://localhost:12345/index.html

Now fabmodules works to download the nc code for pcb and foam rough cut but I still cant see a preview of the mold. I will test the nc code when I am back home with my othermill.
 	
In the Fablab Barcelona I used a CAM program called Modela Player 4 that comes with the Roland Mill. This is the process:

* Import your stl file (File > Open)
* Select the material from the pull-down to the right
* File > Select Machine (SRM-20)
* File > Model
* Set dimensions of your wax block (144 x 76 x 44 mm in my case)
* Set the origin to the top left of the model
* Set the margin around your model
* Set the depth of the model so the mill does not cut two deep into it
* Click on the right on New Process
* First select Roughing
* Select the tool 3 mm2 (I could not select the 3,175 mm tool)
* I selected Scan Lines in X direction 
* Cutting Speed 15 mm/s, Cutting Amount 1.5 to 2 mm
* Click on the little mill sign below and make sure you have zeroed your mill before 
* not not select the export to file
* do the same process for rough cut in Y direction and fine cut with the 1/32 mill
* I also did my fine cut with the 3mm tool 


![](./images/image5.jpg)

![](./images/image6.jpg)

![](./images/image7.jpg)

![](./images/image12.jpg)

![](./images/image9.jpg)


Here is the difference beetween the different line options. 

![](./images/screenshot10.jpg)
![](./images/screenshot11.jpg)

![](./images/image8.jpg)

![](./images/image13.jpg)

![](./images/image10.jpg)
![](./images/image11.jpg)


**First I had my wax block alined wrongly so check if you bock is aligned from left to right and not from front to back**. 

[Here](http://fabacademy.org/archives/content/tutorials/General_Machine_Tutorials/Milling/ModelaPlayer4_tutorial_v2.html) is also a tutorial for the Modela Player process. 


## Milling

I tried to do some test cuts with the wax blocks but I realized that they did not fit in the mill so I cut the block with the miter saw. But this is probably not the best mill for this task as this saw leaves a lot of excess material. I then decided to heat up the pot and pour the wax into a baking form and also scooped all the wax that I cut away with the miter saw. Next time I would build me some box so I could create wax blocks that fit perfectly to the Othermill. 

I will try back at home to find a metal box and warm it up before I pour in the wax.

![](./images/image2.jpg)

![](./images/image3.jpg)

![](./images/image4.jpg)


***Update 9. Mai 2016:***

At the Fablab Barcelona we are using the Roland SRM20 for cutting. I put the Z and X/Y to the top left part of the wax part and used the the nc file I exported out of Modela Player and cut it. Later I understood that you can cut directly out of Modela Player.

![](./images/image15.jpg)

In the end I did not use the 1/32 mill to make the fine cuts but did everything with the 3mm bit.

### Makeing the Mold

***Update 22. Mai 2016***

Back in Barcelona I finally managed to make the Silicon Mold. I will do one with my machined mold and one with my printed Moldlay mold to compare the two. 


I used the food-safe 940 Smooth Sil from Smoothcast. Putting on some plastic gloves I first poured some water in my two wax molds to measure how much Silicon I would need and then weighted it. 

Then with a big plastic cup I poured in first the hardener and then the Silicon. The relation is 100 to 10. So I poured in 20 ml hardener and 200 ml Silicon. Its a sticky work and its quite exhausting to stir the two components I do not know if I would do this very often at home. But I guess I just have to get used to the process. 

After pouring in the silicon I put the mold under the vacuum chamber to get rid of bubbles six times. 

With the second mold the wax-cut I then vacuumed it 3 times before pouring it in the mold. Lets see if there are any differences. 


![](./images/image16.jpg)
![](./images/image17.jpg)
![](./images/image18.jpg)
![](./images/image19.jpg)

![](./images/image21.jpg)

If you compare the to silicon molds the one with milled wax is much cleaner. 

Also the mold for which I vacuumed the silicon before pouring does not have bubbles and the other one I only vacuumed when in the mold does have. 


![](./images/image22.jpg)


### Casting with Resin

***Update 24. Mai 2016***

First I used the smooth cast 300 which you have to mix with 100A to 90B but I stirred it two long and also used to much of it and I also had forgotten to spray in mold release before. 


![](./images/image23.jpg)

Because we did not have more Smooth-Cast 300 I used a Spanish resin and mixed it one to one. 

So for the second try I used mold release and let it soak in for a moment and then mixed the resin and poured it in only to realize that I did not close the mold as obviously the two sides of the  darth vader knob have to stick together. 


![](./images/image24.jpg)

![](./images/image25.jpg)

I realized I needed some hole to pour in the resin so I cut a little cone. in the two sides of the mold. 


![](./images/image26.jpg)

 Then I mixed and poured in the resin but again did not pour it fast enough so I only got one side. 
 
 
![](./images/image27.jpg)

Next I realized that I did not design my pieces right because they two sides where no aligned so I drew a black line on both sides but still did got get a perfect result. Also I used a tape to put the two sides together but will next time build a box around it to perfectly align the two sides. Also I realized I have to really measure the amount of resin I will use perfectly with water before so I do not run out. Also next time I will right in the design think about where the air can get out or put resin with the finger an all sides. 



![](./images/image31.jpg)


![](./images/image32.jpg)


![](./images/image33.jpg)


![](./images/image34.jpg)





After a two day molding session and doing all possible mistakes I learned a lot and looking forward to my next mold. Liked 3D Printing it is also a skill you first have to master to get a perfect result.

With the moldlay piece you still see the 3D Printed lines but I will try to print it with a different material and increase the temperature a bit. The mold come out exactly like the 3D Printed piece so I am optimistic I can also greate a great cast piece out of a 3D Printed piece. 


![](./images/image35.jpg)

## Moldlay

***Update 5. Mai 2016:***

Because I could not machine yet I wanted to try a negativ form of my model and split it up in two parts. I also added a little hole to pour in the resin. I design it in tinkercad which is still feel most comfortable with. I then printed it out with 210 degrees and 60 degrees heated bet. You can find the files below. 

Why moldlay? You can use your printer to produce a mold and its melt at a lower temperature when doing lost wax molding. I read in the Ultimaker forum that moldlay filament burns away at 270 degrees compared to PLA at 800 degrees. 


***Update 6. Mai 2016:***

When I got to Barcelona I learned that with my mold it would be really hard to get out the resin because of my overhangs. So I need to to a second design when I get back to Munich and create a positive model like I would do for milling and first fill in the silicon. I think if you have something like the m below you can get away with just a negative mold. 

![](./images/screenshot4.jpg)

This would be the process with the negative model. 

![](./images/screenshot2.jpg)

In my case I also need to design a positive mold. 

***Update 6. Mai 2016:***

I took the tinkercad file I designed for the wax cut and modified it for 3D Printing.

### Silicon Mold


![](./images/image20.jpg)


### Casting with Resin


![](./images/image32.jpg)


## Project Files

[Download](https://www.dropbox.com/s/ags1fohzarfpeaw/Screenshot%202016-05-25%2015.35.43.png?dl=0) all project files from this assignment from my Google Drive.


## Learnings

* different materials to cast
* where to buy molding equipment
* learned Cam Software: Fabmodules, Modela Player, Fusion Cam
* how to design for CNC machining and molding & casting
* improved my tinkercad skills
* I think I prefer to print the mold with moldlay as the milling took for ever and my othermill cannot machine the big wax blocks
* for that I would love to buy a bigger CNC to make bigger molds
* how to mold and avoid misaligned two sided molds, bubbles 
* I would put a little wooden box around my silicon mold to make alignment easier


## Feedback

[Twitter](http://www.twitter.com/andreaskopp) me or [email me at andreasrkopp at gmail dot com](mailto:andreasrkopp@gmail.com).

[BACK to START](../)

[FINAL PROJECT](../final) / [WEEK 1](../week1) / [COMPUTER AIDED DESIGN](../week2) / [COMPUTER-CONTROLLED-CUTTING](../week3) / [ELECTRONICS PRODUCTION](../week4) / [3D SCANNING & PRINTING](../week5) / [ELECTRONICS DESIGN 1](../week6)  / [COMPUTER-CONTROLLED MACHINING](../week7) / [EMBEDDED PROGRAMING ](../week8) / [MECHANICAL AND MACHINE DESIGN](../week9) / [INPUT DEVICES](../week10) / [3D MOULDING AND CASTING ](../week11) / [OUTPUT DEVICES](../week12) /  [COMPOSITES](../week13) / [EMBEDDED NETWORKING & COMMUNICATIONS](../week14) / [INTERFACE AND APPLICATION PROGRAMMING ](../week15) / [APPLICATIONS AND IMPLICATIONS ](../week16) / [INVENTION, INTELLECTUAL PROPERTY, AND BUSINESS MODELS](../week17) / [PROJECT DEVELOPMENT ](../week18)  

# Week 3 - COMPUTER-CONTROLLED-CUTTING

Februar 10 - Februar 17

[Lecture Link ](http://academy.cba.mit.edu/classes/computer_cutting/index.html), [Video Link](http://archive.fabacademy.org/archives/2016/master/videos/02-10/index.html), [Documentation](http://fabacademy.org/archives/content/tutorials/04_Computer-Controlled_Cutting/Press-Fit_Construction_Tips.html)

~~~
*Weeks Assignment*

Laser cutter

* Make a parametric press fit kit with the laser cutter
* Explain how you drew your files
* Shown how you made your press-fit kit
* Eaten fresh vegetables today
* Included your design files and photos of your finished project

Vinyl Cutting

There is no specific project that is focussed on this very useful tool. There are a range of ways you might utilize it throughout the program, or your local instructor may set a specific project.

You might make:

* stickers
* flexible circuit boards
* a textured surface/relief pattern 
* screenprint resists/stencils
* Ensure that you have used it in some way during this time 
and met the objectives below.

Have you:

* Explained how you drew your files
* Shown how you made your vinyl project
* Included your design files and photos of your finished project



~~~

 
## Vinyl cutter

I wanted to get a vinyl cutter for quite some time now and for this assignment I finally bought the [Cameo Silhouette America](http://www.amazon.de/gp/product/B00P2H8ZBM?keywords=cameo&qid=1456752607&ref_=sr_1_1&sr=8-1).

First I installed the Silhouette Software from their Website and then just went throught the manual that came with the cutter to load the cutting mat and and put a sheet of paper on the sticking mat and cut a "hello". But I forgot to specifiy the material but it went allright only I had problems to get the paper of the sticking mat. 

![](./images/image_3.jpg)
![](./images/screenshot1.jpg)

Next I wanted to make a raspberry pi sticker with some vinyl I had lying around from a previous project. I downloaded a raspberry pi png from the internet and loaded it into the Silhouette Software with the trace tool I traced the imaged and printed it out. 

![](./images/screenshot2.jpg)

I put the blade in position 3 and used the preset "White Stickerpaper."

![](./images/image_2.jpg)

You can see the result on the back of my macbook.

![](./images/image_5.jpg)

I also looked for a plugin for Inkscape but could only find one for the Mac Version. Only for Windows Inkscape, Illustrator and Corel draw. If you are using one of these program you can find it [here](http://www.hobbyplotter.de/download/content/index.php?id=40). 

### Vinylcutter as Plotter

Also you can use the Cameo as a Plotter by downloading this [penholder](http://www.thingiverse.com/thing:346734/#files) from Thingiverse.   

### Vinylcutter as Engraver

To use it as a engraver you get get [this](http://www.amychomas.com/index.php?main_page=product_info&cPath=25&products_id=139) tool. 

### Making flexible PCB with the Cutter

Also you can make [flexible pcbs](http://images.google.de/imgres?imgurl=http://fab.cba.mit.edu/content/processes/PCB/vinyl1.jpg&imgrefurl=http://fab.cba.mit.edu/content/processes/PCB/vinylcut.html&h=375&w=500&tbnid=-i5e77l0go6eOM:&tbnh=95&tbnw=126&docid=jeWQ8twjMTLxBM&usg=__RjL10ZFVK9fcMLEa-gAEBfitiBU=&sa=X&ved=0ahUKEwjD1pmA653LAhUIz3IKHdqgDkgQ9QEIJzAB) with the Cutter. 



## Laser Cutter


### Make a Laser cut Press Fit Construction Kit

The assignment for this week is to make a laser cut press fit construction kit. These [constructions tipps and examples](http://archive.fabacademy.org/archives/2016/doc/press_fit.html) helped me a lot.  

What is press fit you might ask? It is a fastening between two parts which is achieved by friction after the parts are pushed together, rather than by any other means of fastening according to [wikipedia](https://en.wikipedia.org/wiki/Interference_fit).

I looked around in my office and my kitchen to find some press-fit examples like a honey pot, a magnesium pill tube and a kitchen box.  

![](./images/image_6.jpg)

Also I found some tipps how to make a 3D Printing Press-Fit Parts. As I still do not have a laser cutter at home but quite a few lasercutters this is more practical for me.  

![](./images/screenshot6.jpg)

In the lecture Neil talked about a [Champfer](https://en.wikipedia.org/wiki/Chamfer) to make the press fit joints better.  

What is a champfer you might ask? Champfers are straight-line transitions between curves on the same plane or between surfaces. You can do one by creating a line segment between two curves and trims or extends the curves to meet it." [according to a Rhino documentation](http://docs.mcneel.com/rhino/5/help/en-us/seealso/sak_fillet-blend-chamfer.htm).

Why do we need Champfers? It takes a misalignment and alines it and compresses the material resulting in a better Joint. 


### My Process 

These are the things I used for this assignment:

* digital caliper
* Analog calipher
* rajet laser Cutter
* Zing Laser Cutter.
* wood

Normally I would use the [Maker Case Boxmaker](http://www.makercase.com/) then import the files into Corel Draw or Inkscape and make my adjustments there. My experience so far is that the boxes for that you generate with this Boxmaker are not press-fit and you need to do quite some adjusting, so I decided to learn to do this exercise in Inkscape, OpenScad, Antimony and Rhino. Also my goal is to but a website togehter like the boxmaker for a pressfit box.

![](./images/screenshot10.jpg)


#### Measuring & Testing


First I measured my material with a caliper. With the digital caliper the material was 3.65 mm thik and with the analog 3,75 mm. 


![](./images/image_11.jpg)
![](./images/image_12.jpg)



The I measured the kerf which is the material that the laser burns away. For that I cut a square, then measure the inner dimension of the hole and the outer dimension of the piece. 

Subtract and divide by two: this is the kerf for that material. For the Trotec that was 0,2 mm for the Zing that was 0,2 mm.

![](./images/image_13.jpg)

![](./images/image_14.jpg)
![](./images/image_15.jpg)
![](./images/image_16.jpg)
![](./images/image_17.jpg)
![](./images/image_18.jpg)
![](./images/image_19.jpg)


### Inkscape

To find out the perfect notch size I started to make a couple of hinges with different sizes. I started with 3.7 mm and decreased it by 0.5 mm Steps.

The site of [João Leão](http://archive.fabacademy.org/archives/2016/fablabbcn2016/students/4/exercise03.html) guided me through this step by step. 

You create a coupble of rectangles and clone them (Alt + D) and then resize them according to the thikness of your material.


Then select all rectangles and distribute.


With the Rayjet the best fit I got with 3,4 mm and 3,45 mm. 

Then I did the same test with the Zing with 100 % Power and 85 %s Speed but it did not cut through completely so I tried wieh 90 % Speed and 85% Power. The best fit I got with 3,5 mm and 3,55 mm.


[Here](http://wiki.fablab.is/wiki/Inkscape_how_to_make_a_pressfit_design) you can find the full process step by step. 
 


#### Corel Draw

In CorelDraw the process is quite similar. 

You create a couble of rectangles and clone them and then resize them according to the thikness of your material. In Corel you need to select the first rectangle and always clone that one. 


Then select all rectangles align them and distribute them over the selection evenly. 



Then group all rectangle with CTRL + G and change the color of the rectangle to red. 



Create a second big rectangle and select all small rectangles and move them so they intersect with it. Select the both and select trim. Because it did not cut the first rectangle I copied and pasted it again and trimmed it again. 


With the Trotec the best fit was with 3,45 mm and 3,4 mm with 100 % Power and 0.2 % speed. 

Then I also used the Zing laser and there the best fit was with 3,5 mm and 3,45 mm and 90 % speed and 85 % power. 

So it means the notch (width of the tabs) has to be 0.2 mmm wider then the tile.  

I tried to do the paremetric kit with Corel Draw but it was very time consuming. You clone a thing and rotate it is not together any more. 

Here is what I came up with. 


Some project I would love to build upon is the [boxmaker](https://github.com/rahulbot/boxmaker-website) from [@rahulbot](https://twitter.com/rahulbot) or [makeabox.io ](https://github.com/kigster/laser-cutter). http://www.thingiverse.com/thing:1541

http://fab.cba.mit.edu/classes/863.14/people/amanda_ghassaei/pressFit/tiles.html



#### Antimony

With Corel Draw I was not able to make the git really paremetric so I moved to Antimony. 




#### Rhino 

I saw that there is a [video tutorial ](https://vimeo.com/155032336) how to make a press fit joint but I have not had time to go over it yet. 


### Cuting

I took my files from Corel Draw and cut them with the Zing Laser cutter. 


![](./images/image_20.jpg)
![](./images/image_21.jpg)
![](./images/image_22.jpg)


I then did this box with the same paremeters. 

![](./images/image_7.jpg)
![](./images/image_8.jpg)
![](./images/image_9.jpg)
![](./images/image_10.jpg)



## Project Files

[Download](https://drive.google.com/open?id=0B3iYmii-HJ7TVE5uTWpISnFSUHc) all project files from this assignment from my Google Drive.

## Tipps and Tricks

This time I used a [batch image processing tool](http://bulkresizephotos.com/) this week because I had to resize quite some pictures I took with my i-phone and then scaled it down by 20%. 


## Feedback ?

Please give me feedback 
[Twitter](http://www.twitter.com/andreaskopp) me or [email me at andreasrkopp at gmail dot com](mailto:andreasrkopp@gmailcom).
 
 









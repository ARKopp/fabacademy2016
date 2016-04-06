[BACK to START](../)

[FINAL PROJECT](../final) / [WEEK 1](../week1) / [COMPUTER AIDED DESIGN](../week2) / [COMPUTER-CONTROLLED-CUTTING](../week3) / [ELECTRONICS PRODUCTION](../week4) / [3D SCANNING & PRINTING](../week5) / [ELECTRONICS DESIGN 1](../week6)  / [COMPUTER-CONTROLLED MACHINING](../week7) / [EMBEDDED PROGRAMING ](../week8) / [MECHANICAL AND MACHINE DESIGN](../week9) / [INPUT DEVICES](../week10) / [3D MOULDING AND CASTING ](../week11) / [OUTPUT DEVICES](../week12) /  [COMPOSITES](../week13) / [EMBEDDED NETWORKING & COMMUNICATIONS](../week14) / [INTERFACE AND APPLICATION PROGRAMMING ](../week15) / [APPLICATIONS AND IMPLICATIONS ](../week16) / [INVENTION, INTELLECTUAL PROPERTY, AND BUSINESS MODELS](../week17) / [PROJECT DEVELOPMENT ](../week18)  


# Week 1 - Principles and Practices & Project-management 

Januar 27 - Februar 3


Lesson Link - [Principles and Practices](http://academy.cba.mit.edu/classes/principles_practices/index.html), Projectmanagement  , [Video](http://connectmedia.waag.org/AcadeMany/fab-2016/01-27/)

~~~
*Weeks Assignment*

* Build a personal site describing 
* descibe you and your final project
* describe how you build the website. 

* Upload website to the class archive 

* Do a git tutorial. 
~~~


##Git Tutorial

I only got into git a couple of weeks earlier and can recommend [this tutorial](http://rogerdudler.github.io/git-guide/). Some other good tutorials I found [here](http://think-like-a-git.net/) and visual guide [here](http://marklodato.github.io/visual-git-guide/index-en.html). 

I also downloaded a couple of desktop git programs like [github desktop](https://desktop.github.com/) and [tower](https://www.git-tower.com/) but decided to use the command line instead.

This are a couple of commandos I had to remember: 

Create a folder.

`git init` 
`git add <filename>`  
`git commit -m "initial commit"`  

Create a repository on github. Just click on create repository.

`git clone username@host:/path/to/repository` 

When you create respository you can just copy the first line in the site the pops up after you create a repository.

Also you need to type this: 

`git push origin master`


Then you can update the repo like this: 

`git pull` 
`git add.`  
`git commit -m "blaba"`  
`git push`  


If you and up in vim. Type ":" and "q" to get out of it. 

This is the basic workflow 

![](images/basic-usage.svg)


I created a private github repo for my files and then cloned the Fablab Barcelona repo as well. 

`git clone git@git.fabacademy.org:fabacademy2016/fablabbcn2016.git`
`git config --global user.name "John Doe"`

I recommend [Macdown](http://macdown.uranusjr.com/) a open source Markdown editor for Mac. 

I am traveling at the moment and I realized that its better to set up your repositories with https instead of ssh because it seems that some hotels or at my lufthansa flight ssh was blocked. 

Check what your remote repository is with 
`git remote -v`

Change the remote rep to the https address of github
`git remote set-url origin https://github.com/ARKopp/fabacademy2016.git` 

I still have not figured how it would work in gitlab
 
`git remote set-url origin http://git.fabacademy.org/fabacademy2016/fablabbcn2016.git`

If you want to switch back to ssh you can so with 

`git remote set-url origin git@git.fabacademy.org:fabacademy2016/fablabbcn2016.git`

The workflow for the fabacademy is the following: 

`git pull`
`git add .`
`git commit -m "message"`
`git push`


[Here](http://archive.fabacademy.org/archives/2016/doc/gitCheatSheet.html) is also a cheat sheet that was created from one of the fabacademy student.

## My Website


### Markdown to static html generator

Because I quite like the Markdown language and the documentation needs to uploaded to git lab anyway I decided to write all my documentation in Markdown and use a script to generate the html files. 

I found [this](https://github.com/mixu/markdown-styles) Markdown to static html generator with build in themes. 

That how you install it (before you need to have node js installed)

`sudo npm install -g markdown-styles`

An that is how you generate the html files. 

``bash
	generate-md --layout github --input ./ --output ../fablabbcn2016/students/375/
``

You have couple of themes to choose from. I chose the github theme.

![](images/montage.jpg)

### Preview of Website

To see how my website looks like in html I am starting a python server in the fabacademy folder were I am putting my html files.

``python -m SimpleHTTPServer 8000``

Then I can look at the website under this address [http://localhost:8000/](http://localhost:8000/)

### Workflow

1. Write Documentation in Markdown in Macdown
2. Put in pictures and files in the assets folder
3. Link to big files
4. Make pictures as small as possible with Preview
5. Run script to generate html
6. Preview website with [http://localhost:8000/](http://localhost:8000/)
7. Go to my fablabbcn2016/students/375 folder first pull and then push to gitlab
8. Also check if the file size is not bigger that 1 MB ``du -sk * | sort -n`

## Final Project

My idea of a [final project](../final) is to build a robotic post-it sticking machine.


## Feedback ?

[Twitter](http://www.twitter.com/andreaskopp) me or [email me at andreasrkopp at gmail dot com](mailto:andreasrkopp@gmailcom). 

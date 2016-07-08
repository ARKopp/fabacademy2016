from tkinter import *
from tkinter import messagebox
from PIL import Image, ImageTk
import serial
import math



# VARIABLES
WINDOW = 600 # window size
nsamples = 100.0 # number of samples accumulated
# COLORS
dark='#000000'
light='#ffffff'

# TEXT
textAbout=""
textThink=""


#
# MAIN WINDOW
#
root = Tk()
root.title('Speedometer')
canvas = Canvas(root, width=WINDOW, height=.9*WINDOW,background='black') # Set window size+

rpmvalue = 0
kmhvalue = 0
mphvalue = 0


filename = PhotoImage(file = "fab9000-urbana1.gif")
image = canvas.create_image(.95*WINDOW,.05*WINDOW, anchor=NE, image=filename)
title=canvas.create_text(.5*WINDOW,.45*WINDOW,text="Speedometer",font=("Microgramma D OT", 20),tags="text3",fill=light)

#
if (len(sys.argv) != 2):
   print("add a serial port please")
   sys.exit()
port = sys.argv[1]
#w
# open serial port
#
ser = serial.Serial(port,9600)
ser.setDTR()
#




def idle(parent,canvas):
   global filter, eps
   #
   # idle routine
   #
   byte2 = 0
   byte3 = 0
   byte4 = 0
   ser.flush()
   while 1:
      #
      # find framing 
      #
      byte1 = byte2
      byte2 = byte3
      byte3 = byte4
      byte4 = ord(ser.read())
      if ((byte1 == 1) & (byte2 == 2) & (byte3 == 3) & (byte4 == 4)):
         break
   low = ord(ser.read())
   med = ord(ser.read())
   high = ord(ser.read())
   value = (256*256*high + 256*med + low)/nsamples
   x = int(.2*WINDOW + (.9-.2)*WINDOW*value/1024.0)
   print(value)
   kmhvalue = value
   rpmvalue = value
   mphvalue = value

   canvas.itemconfigure("rpm",text="%.2f"%rpmvalue)
   canvas.itemconfigure("kmh",text="%.2f"%kmhvalue)
   canvas.itemconfigure("mph",text="%.2f"%mphvalue)
   #canvas.coords('rect1',.2*WINDOW,.05*WINDOW,x,.2*WINDOW)
   #canvas.coords('rect2',x,.05*WINDOW,.9*WINDOW,.2*WINDOW)
   canvas.update()
   parent.after_idle(idle,parent,canvas)





def donothing():
    pass

def about():
   tkMessageBox.showinfo("About fab Speedometer", textAbout)
   
def modSelect(event=None):
    canvas.delete(ALL)
    dark='#000000'
    light='#ffffff'
    image = canvas.create_image(.95*WINDOW,.05*WINDOW, anchor=NE, image=filename)
    title=canvas.create_text(.5*WINDOW,.45*WINDOW,text="rpm",font=("Microgramma D OT", 150),tags="text3",fill=light)
    value=canvas.create_text(.25*WINDOW,.33*WINDOW,text=rpmvalue,font=("Museo Sans 100", 30),tags="rpm",fill=light)

def kmhmode(event=None):
    canvas.delete(ALL)
    dark='#b11204'
    light='#ffffff'
    rec=canvas.create_rectangle(.0*WINDOW,.0*WINDOW,1*WINDOW,1*WINDOW, tags='rect2', outline='', fill=dark)
    title=canvas.create_text(.5*WINDOW,.45*WINDOW,text="km/h",font=("Microgramma D OT", 120),tags="text3",fill=light)
    value=canvas.create_text(.28*WINDOW,.33*WINDOW,text=kmhvalue,font=("Museo Sans 100", 30),tags="kmh",fill=light)
    
    
def milesmode(event=None):
    canvas.delete(ALL)
    dark='#026497'
    light='#ffffff'
    rec=canvas.create_rectangle(.0*WINDOW,.0*WINDOW,1*WINDOW,1*WINDOW, tags='rect2', outline='', fill=dark)
    title=canvas.create_text(.5*WINDOW,.45*WINDOW,text="mph",font=("Microgramma D OT", 120),tags="text3",fill=light)
    value=canvas.create_text(.25*WINDOW,.33*WINDOW,text=mphvalue,font=("Museo Sans 100", 30),tags="mph",fill=light)

root.bind('m',milesmode)
root.bind('k',kmhmode)
root.bind('s',modSelect)   
root.bind('q',sys.exit)

# MENU
# 
menubar = Menu(root)

filemenu = Menu(menubar, tearoff=0)
filemenu.add_command(label="New", command=donothing)
filemenu.add_command(label="Open", command=donothing)
filemenu.add_command(label="Save", command=donothing)
filemenu.add_command(label="Save as...", command=donothing)
filemenu.add_command(label="Close", command=donothing)
filemenu.add_separator()
filemenu.add_command(label="Exit", command=root.quit)
menubar.add_cascade(label="File", menu=filemenu)

modemenu = Menu(menubar, tearoff=0)
modemenu.add_command(label="km/h", command=kmhmode)
modemenu.add_command(label="mph", command=milesmode)
modemenu.add_separator()
modemenu.add_command(label="Select Mode...", command=modSelect)
menubar.add_cascade(label="Mode", menu=modemenu)

helpmenu = Menu(menubar, tearoff=0)
helpmenu.add_command(label="About...", command=about)
menubar.add_cascade(label="Help", menu=helpmenu)

root.config(menu=menubar)

     
    
canvas.pack()
root.after(100,idle,root,canvas)
root.mainloop()


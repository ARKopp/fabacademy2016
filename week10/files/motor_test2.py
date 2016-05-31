

# @andreaskopp for Fabacademy

#import explorerhat
from gpiozero import Button, LED, Motor
from time import sleep


button = Button(9)
led1 = LED(10)

#motor1 = Motor(forward=19 , backward=20) #gpio zero motor1
#motor2 = Motor(forward=21 , backward=26) #gpio zero motor2

#the explorer hat has already some motor functions build in
#invert() - Reverses the direction of forwards for this motor
#forwards( speed ) - Turns the motor "forwards" at speed ( default 100% )
#backwards( speed ) - Turns the motor "backwards" at speed ( default 100% )
#speed(-100 to 100) - Moves the motor at speed, from full backwards to full forwards

speed_levels = [0, 25, 50, 75, 100]

active_speed = 0



def button_pressed():
        print("Button pressed")
        led1.on()
        explorerhat.light.toggle()

        global active_speed
        active_speed = (active_speed + 1) % len(speed_levels)
        explorerhat.motor.forwards(speed_levels[active_speed])

button.when_pressed = button_pressed

while True:
       sleep(5)

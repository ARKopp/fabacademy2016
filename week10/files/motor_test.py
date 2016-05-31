import explorerhat
from gpiozero import Button, LED, Motor
from time import sleep


button = Button(9)
led1 = LED(10)

motor1 = Motor(forward=19 , backward=20)
motor2 = Motor(forward=21 , backward=26)




while True:
        if button.is_pressed:
                print("Button pressed")
                led1.on()
                motor1.forward()
                motor2.forward()
        else:
        		print("Button is not pressed")
        		led1.off()
        		motor1.stop()
        		motor2.stop()
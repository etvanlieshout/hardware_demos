''' Clapper.c ******************************************************************
    Clapper is a simple program that turns an light on/off in response to a clap
    *************************************************************************'''

from machine import ADC, Pin
from time import sleep

led = Pin(13, Pin.OUT)
switch = ADC(Pin(26))
led_state = 0

led.value(led_state)

while True:
    read_in = switch.read_u16()
    if read_in > 50000: #40000 for music
        led_state = not led_state
        led.value(led_state)
        print(read_in)
        sleep(0.2) #turn to 0.1 for better music response

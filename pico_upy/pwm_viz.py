''' PWM Visualizer *************************************************************
    Music volume controls LED brightness to make a music visualizer.
    *************************************************************************'''

from machine import ADC, Pin, PWM
from time import sleep

led = PWM(Pin(13))
audio_in = ADC(Pin(26))

led.freq(1000)

# .read_u16()
while True:
    pwm_duty = audio_in.read_u16()
    if 35000 < pwm_duty < 50000:
        print(pwm_duty)
        led.duty_u16(65025 * (pwm_duty - 35000)//5000)
        sleep(0.1)
    else:
        led.duty_u16(0)
        sleep(0.05)

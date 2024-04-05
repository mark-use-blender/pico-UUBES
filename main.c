/*
openocd -f interface/raspberrypi-swd.cfg -f target/rp2040.cfg -c "program pico-UUBUS.elf verify reset exit"
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pico/stdlib.h"
#include "pico/binary_info.h"
#include "pico/multicore.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"
#include "hardware/pwm.h"
#include "hardware/uart.h"
#include "src/pico_servo.h"
#define SERVO_PIN 20

void main()
{
    
    servo_enable(SERVO_PIN);
    servo_set_position(SERVO_PIN, 90); 
    sleep_ms(100);
    servo_set_position(SERVO_PIN, 80); 
    sleep_ms(100);
    servo_set_position(SERVO_PIN, 90); 



}

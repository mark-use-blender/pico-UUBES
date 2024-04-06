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
#define SERVO_PIN 2
#define ONB_LED_0 11 //led pin
#define meg_sw 3

void main()
{
    gpio_init(meg_sw);
    gpio_set_dir(meg_sw, 0);
    

    gpio_init(ONB_LED_0);
    gpio_set_dir(ONB_LED_0, 1);
    servo_enable(SERVO_PIN);
    
    servo_set_position(SERVO_PIN, 90); 
    gpio_put(ONB_LED_0, 0);
    sleep_ms(1000);
    gpio_put(ONB_LED_0, 1);
    sleep_ms(5000);
    while(true){
        while(gpio_get(meg_sw) == 0){
            sleep_ms(50);
            gpio_put(ONB_LED_0, 1);
            sleep_ms(50);
            gpio_put(ONB_LED_0, 0);
        }
        gpio_put(ONB_LED_0, 0);
        sleep_ms(1000);
        gpio_put(ONB_LED_0, 1);
        sleep_ms(50);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(50);
        gpio_put(ONB_LED_0, 1);
        sleep_ms(50);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(50);
        gpio_put(ONB_LED_0, 1);
        sleep_ms(50);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(750);//3
        gpio_put(ONB_LED_0, 1);
        sleep_ms(50);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(50);
        gpio_put(ONB_LED_0, 1);
        sleep_ms(50);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(850);//2
        gpio_put(ONB_LED_0, 1);
        sleep_ms(50);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(950);//1

        servo_set_position(SERVO_PIN, 120); 

        gpio_put(ONB_LED_0, 1);
        sleep_ms(900);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(100);//1
        gpio_put(ONB_LED_0, 1);
        sleep_ms(900);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(100);//2
        gpio_put(ONB_LED_0, 1);
        sleep_ms(900);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(100);//3
        gpio_put(ONB_LED_0, 1);
        sleep_ms(900);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(100);//4
        gpio_put(ONB_LED_0, 1);
        sleep_ms(900);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(100);//5
        servo_set_position(SERVO_PIN, 90); 
        gpio_put(ONB_LED_0, 0);

        sleep_ms(1000);
        while(gpio_get(meg_sw) == 1){
            sleep_ms(50);
            gpio_put(ONB_LED_0, 1);
            sleep_ms(50);
            gpio_put(ONB_LED_0, 0);
        }
        gpio_put(ONB_LED_0, 1);
        sleep_ms(1900);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(100);//1
        gpio_put(ONB_LED_0, 1);
        sleep_ms(1900);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(100);//2
        gpio_put(ONB_LED_0, 1);
        sleep_ms(1900);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(100);//3
        gpio_put(ONB_LED_0, 1);
        sleep_ms(1900);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(100);//4
        gpio_put(ONB_LED_0, 1);
        sleep_ms(1900);
        gpio_put(ONB_LED_0, 0);
        sleep_ms(100);//5

    // while (true){
       
    //     sleep_ms(50);
    //     gpio_put(ONB_LED_0, 1);
    //     sleep_ms(50);
    //     gpio_put(ONB_LED_0, 0);
    // }
    }

}

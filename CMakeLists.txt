cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)

project(pico-UUBUS C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()
add_executable(pico-UUBUS
  src/pico_servo.c
  src/pico_servo.h
  main.c
)

pico_add_extra_outputs(pico-UUBUS)
target_link_libraries(
  pico-UUBUS 
  pico_stdlib 
  hardware_gpio 
  hardware_adc 
  hardware_pwm 
  hardware_uart 
  hardware_flash 
  hardware_sync 
  pico_multicore
  
)

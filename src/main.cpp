/*
DIY Radio Controller
By: acremonezi@gmail.com
*/

#include <Arduino.h>
#include <settings.h>
#include <digital_inputs.h>
#include <mems.h>
#include <radio.h>
#include <blink.h>

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  blink();

}
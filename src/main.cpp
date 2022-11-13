#include <Arduino.h>

int counter;

void setup()
{
  Serial.begin(9600);
  Serial.println("Initialized");

  counter = 0;
}

void loop() {
  delay(1000);
  Serial.printf("%d\n", counter++);
}
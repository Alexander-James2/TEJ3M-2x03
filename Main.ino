// Created by: Alexander James
// Sept 2023

// Arduino Blink on Pin 4 with breadboard

int pin4 = 4;
void setup()
{
  pinMode(pin4, OUTPUT);
}

void loop()
{
  digitalWrite(pin4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
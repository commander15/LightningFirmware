#include <Arduino.h>

#define R_PIN 9
#define G_PIN 10
#define B_PIN 11
#define A_PIN 8

void setColor(int r, int g, int b, int a);

void setup() 
{
  pinMode(R_PIN, OUTPUT);
  pinMode(G_PIN, OUTPUT);
  pinMode(B_PIN, OUTPUT);
  pinMode(A_PIN, OUTPUT);

  digitalWrite(A_PIN, LOW);
  setColor(0, 0, 0, 0);

  Serial.begin(9600);
  Serial.println("Ready !");
}

void loop() 
{
  if (Serial.available() >= 4) {
    int r = Serial.read();
    int g = Serial.read();
    int b = Serial.read();
    int a = Serial.read();

    setColor(r, g, b, a);
  } else {
    delay(10);
  }

  delay(50);
}

void setColor(int r, int g, int b, int a)  
{
  if (r < 0 || r > 255) r = 0;
  if (g < 0 || g > 255) g = 0;
  if (b < 0 || b > 255) b = 0;
  if (a < 0 || a > 255) a = 0;

  analogWrite(R_PIN, r * a / 255);
  analogWrite(G_PIN, g * a / 255);
  analogWrite(B_PIN, b * a / 255);
}
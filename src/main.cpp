#include <Arduino.h>

#define RED_LED_PIN 15
#define BLUE_LED_PIN 16
#define delayTime 500
#define BaudRate 115200



void setup() {
  Serial.begin(BaudRate);
  Serial.println("Start");
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(BLUE_LED_PIN, LOW);
}

void loop() {
  digitalWrite(RED_LED_PIN, HIGH);
  Serial.println("Red LED ON");
  delay(delayTime);
  digitalWrite(RED_LED_PIN, LOW);
  Serial.println("Red LED OFF");
  delay(delayTime);

  digitalWrite(BLUE_LED_PIN, HIGH);
  Serial.println("Blue LED ON");
  delay(delayTime);
  digitalWrite(BLUE_LED_PIN, LOW);
  Serial.println("Blue LED OFF");
  delay(delayTime);
} 

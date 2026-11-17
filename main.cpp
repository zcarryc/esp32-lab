#include <Arduino.h>
#include "config.h"

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("boot ok");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_MS);
  digitalWrite(LED_PIN, LOW);
  delay(BLINK_MS);
}

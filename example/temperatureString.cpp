#include <dtostrf.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  float temperature = 25.5;
  char temperatureString[10];

  dtostrf(temperature, 4, 1, temperatureString);

  Serial.print("Temperature: ");
  Serial.println(temperatureString);

  delay(1000);
}

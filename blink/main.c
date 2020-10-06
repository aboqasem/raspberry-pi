#include <wiringPi.h>

#define PIN_LED 4

int main () {
  // setup pin numbering to broadcom's
  wiringPiSetupGpio();
  // set pin PIN_LED to output
  pinMode(PIN_LED, OUTPUT);
  
  // loop forever
  for (;;) {
    digitalWrite(PIN_LED, HIGH);
    delay(50);
    digitalWrite(PIN_LED, LOW);
    delay(50);
  }
  
  return 0;
}

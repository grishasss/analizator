#include "analizator.h"



ANALIZATOR analizator;


void setup() {
  analizator.begin();
}

void loop() {
  analizator.process();
}
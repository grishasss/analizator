#include "analizator.h"


#include "web.h"
#include "memory.h"

ANALIZATOR analizator;


void setup() {
  analizator.begin();
}

void loop() {
  analizator.process();
}
//
//    FILE: AD9833_sweep.ino
//  AUTHOR: Rob Tillaart
//    DATE: 2024-02-27
// PURPOSE: demo AD9833 wave form generator


#include "AD9833.h"


AD9833 AD(10);  //  HW SPI, select pin 10

int freq = 100;
bool up = true;


void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);

  SPI.begin();
  AD.begin();
  AD.setWave(AD9833_SINE);
}


void loop()
{
  if (up) freq++;
  else freq--;
  //  reverse direction if needed
  if (freq >= 1000) up = false;
  if (freq <= 100) up = true;
  AD.setFrequency(freq);

  delay(100)  //  to simulate other tasks
}


//  -- END OF FILE --

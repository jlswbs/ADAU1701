// Schmitt Trigger //

#include <SigmaDSP.h>
#include "SigmaDSP_parameters.h"

SigmaDSP dsp(DSP_I2C_ADDRESS, ADAU1701 /*,12*/);

void setup() 
{  
 
  dsp.begin(/* SDA, SCL */);
  loadProgram(dsp);

}


void loop() 
{
 
}

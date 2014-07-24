// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _TrunkDeliver_H_
#define _TrunkDeliver_H_

//Arduino libraries
#include "Arduino.h"
#include <SPI.h>
#include <EEPROM.h>

//GSM_GPS library
#include <gsm_gprs_gps.h>

//own headers
//#include "OBU_Hardware.h"
#include "OBU_Communication.h"
//#include "OBU_Constant.h"


//end of add your includes here
#ifdef __cplusplus
extern "C" {
#endif
void loop();
void setup();
#ifdef __cplusplus
} // extern "C"
#endif

//add your function definitions for the project TrunkDeliver here




//Do not add code below this line
#endif /* _TrunkDeliver_H_ */

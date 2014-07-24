/*
 * OBU_Hardware.h
 *
 *  Created on: 23.07.2014
 *      Author: HAL
 */

#ifndef OBU_HARDWARE_H_
#define OBU_HARDWARE_H_

#include <SPI.h>




class OBU_Hardware {
public:
	OBU_Hardware();
	virtual ~OBU_Hardware();

	void readStringFromSerial(char *incomingByte);
	void serialCommunication();

private:


};


#endif /* OBU_HARDWARE_H_ */

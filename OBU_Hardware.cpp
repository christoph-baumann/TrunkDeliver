/*
 * OBU_Hardware.cpp
 *
 *  Created on: 23.07.2014
 *      Author: HAL
 */

#include "OBU_Hardware.h"



OBU_Hardware::OBU_Hardware() {
	// TODO Auto-generated constructor stub
}

OBU_Hardware::~OBU_Hardware() {
	// TODO Auto-generated destructor stub
}

void OBU_Hardware::readStringFromSerial(char *incomingByte) {
	int i = 0;
	Serial.flush();
	while (Serial.available() > 0) {
		if (i > 100) {
			Serial.print("  Error: Buffer overflow in \"readStringFromSerial\"");
			//clear serial Buffer

			Serial.flush();
			while (Serial.available()) {
				Serial.read();
			}

		}
		incomingByte[i] = Serial.read();
		i++;
	}
	incomingByte[i] = '\0';
}




void OBU_Hardware::serialCommunication(){

	int h=0;
	int j=0;
	char incomingByte[250];

	while (Serial.available() > 0){
		incomingByte[j] = Serial.read();
		j++;
		delay(3);
		h=0;
	}
	while (h==0){
		Serial.print(incomingByte);
		for(int x=0; x<=250; x++){
			incomingByte[x]=NULL;
		}
		h=1;
	}
}



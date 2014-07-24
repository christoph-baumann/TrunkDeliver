/*
 * OBU_Communication.cpp
 *
 *  Created on: 24.07.2014
 *      Author: HAL
 */

#include "OBU_Communication.h"


OBU_Communication::OBU_Communication() {
	// TODO Auto-generated constructor stub
	hdw = new OBU_Hardware();
	pingRequest = new char[100];
}

OBU_Communication::~OBU_Communication() {
	// TODO Auto-generated destructor stub
	delete hdw;
	delete [] pingRequest;

}


void OBU_Communication::getServerIP(char *ipAddress){
	int i = 0;
	int j = 0;
	Serial.print("AT#PING=");
	Serial.print("ccp.selfhost.eu");
	Serial.print(",1\r");
	delay(3000);

	hdw->readStringFromSerial(pingRequest);

	while(pingRequest[i]!='\0'){
		//Serial.print("while_1\n");
		if (pingRequest[i] == '"') {
			i++;
			//Serial.print("while_1->If_1");
			while (pingRequest[i] != '"') {
				//Serial.print("while_1->If_1->while_2");
				if (j < 16) {
					//Serial.print("while_1->If_1->while_2->if2");
					ipAddress[j] = pingRequest[i];
					i++;
					j++;
				}
			}
		}
		i++;
	}
	ipAddress[j] = '\0';

	Serial.flush();
	while (Serial.available()) {
		Serial.read();
	}
}


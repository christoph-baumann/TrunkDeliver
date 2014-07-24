/*
 * OBU_Communication.h
 *
 *  Created on: 24.07.2014
 *      Author: HAL
 */

#ifndef OBU_COMMUNICATION_H_
#define OBU_COMMUNICATION_H_

#include <gsm_gprs_gps.h>
#include "OBU_Constant.h"
#include "OBU_Hardware.h"

using namespace constant;

class OBU_Communication {
public:
	OBU_Communication();
	virtual ~OBU_Communication();

	void getServerIP(char *server);


private:
	OBU_Hardware *hdw;
	char *pingRequest;
};


#endif /* OBU_COMMUNICATION_H_ */

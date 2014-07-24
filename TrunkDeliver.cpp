// Do not remove the include below
#include "TrunkDeliver.h"

char *test = new char [16];
OBU_Communication *com;


void setup() {
	Serial.begin(9600);

		GSM.begin();
		Serial.println("init GSM/GPRS/GPS-Shield!");

		int result;
		result = GSM.initialize("3841");
		// => everything ok?
		if(result == 0)
		{
			// => NO! Error during GSM initialising
			Serial.print  ("ME Init error: >");
			//    here is the explanation
			Serial.print  (GSM.GSM_string);
			Serial.println("<");
			while(1);
		}

		// connect to GPRS with the correct APN of the provider
		//	T-Mobile, Germany
		result = GSM.connectGPRS("Internet.t-D1.de","tm","tm");
		// 	=> everything ok?
		if(result == 0)
		{
			//	 => no! Error during GPRS initialising
			Serial.print  ("GPRS Init error: >");
			//   here is the explanation
			Serial.print  (GSM.GSM_string);
			Serial.println("<");
			while(1);
		}

		// GPS initialization
		if(GPS.initializeGPS())
	    Serial.println("GPS Initialization completed");
		else
	    Serial.println("GPS Initialization can't completed");
		delay(1000);
		com = new OBU_Communication();
	}


// The loop function is called in an endless loop
void loop()
{



  for (int i = 0; i == 200; i++) {
    test[i] = '0';
  }

  com->getServerIP(test);
  Serial.print(test);

  delay (1000);

}







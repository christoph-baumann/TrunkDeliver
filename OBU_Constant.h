/*
 * OBU_Constant.h
 *
 *  Created on: 23.07.2014
 *      Author: HAL
 */

#ifndef OBU_CONSTANT_H_
#define OBU_CONSTANT_H_

namespace constant {

//AT commands
char *const SOCKET_STATUS = "AT#SS=";
char *const SOCKET_DIAL = "AT#SD=";
char *const SOCKET_SEND = "AT#SSENDEXT=";
char *const PING = "AT#PING=";
char *const GET_OWN_IP = "AT+CGPADDR=1\r";
char *const SOCKET_MSGRECV = "AT#SRECV=";
char *const SOCKET_LISTEN = "AT#SL=";
char *const SOCKET_ACCESS = "AT#SA=";
char *const CONFIG_FIREWALL = "AT#FRWL=";

//Server URL
char *const SERVER = "ccp.selfhost.eu";

//OBU Identifier
char *const  IDENTIFIER = "000001";

//Port
const int UDP_PORT = 15001;
const int TCP_PORT = 15000;

//Buffer
const int MAX_BUFFER = 250;
const int IP_LENGTH = 16;


}

#endif /* OBU_CONSTANT_H_ */

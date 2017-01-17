#pragma once
#include "B4RDefines.h"
#include "ESP8266Ping.h"
namespace B4R {
	//~Version: 1.0
	//~Shortname: ESP8266Ping
	class rESP8266Ping {
		private:
			PingClass pc;
		public:
			//Tries to ping the specified ip address.
			//Returns true if successful.
			//Count - Number of pings to send.
			bool PingIP(ArrayByte* IP, Byte Count);
			//Similar to PingIP. The Host name will be first resolved.
			bool PingHost(B4RString* Host, Byte Count);
			//Returns the average time of the last requests.
			Int AverageTime();
		
	};
}

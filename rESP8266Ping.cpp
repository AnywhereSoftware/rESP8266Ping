#include "B4RDefines.h"
namespace B4R {
	bool rESP8266Ping::PingIP(ArrayByte* IP, Byte Count) {
		IPAddress ip((Byte*)IP->data);
		return pc.ping(ip, Count);
	}
	bool rESP8266Ping::PingHost(B4RString* Host, Byte Count) {
		return pc.ping(Host->data, Count);
	}
	Int rESP8266Ping::AverageTime() {
		return pc.averageTime();
	}
}
#ifdef ESP32

#include <stdint.h>

void syslogBegin(const char* server, const char* source);
void syslogSsend(uint8_t facility, uint8_t severity, const char *tag, const char *message);

#endif
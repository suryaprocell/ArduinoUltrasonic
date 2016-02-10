#ifndef ultrasonic_h
#define ultrasonic_h

#include <Arduino.h>

#define M 2
#define CM 1
#define MM 0

class ultrasonic
{
	public:
	ultrasonic(int trigpin, int echopin);
	double baca(int unit);

	private:
	int _trigpin;
	int _echopin;
	double durasi;
	double hasil;
};

#endif

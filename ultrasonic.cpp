#include <Arduino.h>
#include <ultrasonic.h>

ultrasonic::ultrasonic(int trigpin, int echopin)
{
	pinMode(trigpin, OUTPUT);
	pinMode(echopin, INPUT);
	_trigpin = trigpin;
	_echopin = echopin;
}

double ultrasonic::baca(int unit)
{
	digitalWrite(_trigpin, LOW);
  	delayMicroseconds(2);
  	digitalWrite(_trigpin, HIGH);
  	delayMicroseconds(5);
  	digitalWrite(_trigpin, LOW);
  	durasi = pulseIn(_echopin, HIGH);
	
	if(unit==CM){
  		hasil = durasi/38/2;
	}
	else if(unit==MM)
	{
		hasil = durasi/38/2 * 10;
	}
	else // Meter
	{
		hasil = durasi/38/2 /100;
	}

	return hasil;
}

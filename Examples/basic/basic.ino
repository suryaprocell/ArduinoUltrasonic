#include <ultrasonic.h>

ultrasonic ultrasoniku1(7,8);
ultrasonic ultrasoniku2(5,6);

double jarak1;
double jarak2;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  jarak1 = ultrasoniku1.baca(CM); // MM - Milimeter, M - Meter, CM - Sentimeter
  jarak2 = ultrasoniku2.baca(CM);
  Serial.print(jarak1);
  Serial.print(" - ");
  Serial.println(jarak2);
  delay(1000);
}

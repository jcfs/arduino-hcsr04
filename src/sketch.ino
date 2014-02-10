#include "hcsr04.h"


#define echoPin 8 // Echo Pin
#define trigPin 9 // Trigger Pin

long distance; // Duration used to calculate distance

void setup() {
	Serial.begin(9600);
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
}

void loop() {
	distance = read_distance(echoPin, trigPin);
	Serial.println(distance);

	//Delay 50ms before next reading.
	delay(50);
}

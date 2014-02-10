#include <Arduino.h>
#include "hcsr04.h"

int read_distance(int echoPin, int triggerPin) {

	long duration;

	digitalWrite(triggerPin, LOW);
	delayMicroseconds(2);
	digitalWrite(triggerPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(triggerPin, LOW);
	duration = pulseIn(echoPin, HIGH);
	
	return duration/58.2;
}

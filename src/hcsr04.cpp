#include <Arduino.h>
#include "hcsr04.h"

long read_distance(int echoPin, int triggerPin) {

	long duration, distance;

	digitalWrite(triggerPin, LOW);
	delayMicroseconds(2);
	digitalWrite(triggerPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(triggerPin, LOW);
	duration = pulseIn(echoPin, HIGH);

	// Duration in microseconds
	distance = duration / 58.2;

	if (distance <= 0 || distance >= MAX_DISTANCE) {
		return E_INVALID_DISTANCE;
	} else {
		return distance;
	}
	
}

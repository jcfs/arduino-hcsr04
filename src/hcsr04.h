#ifndef HCSR04_H
#define HCSR04_H
// Constants definition
#define MAX_DISTANCE 200

// Error codes definition
#define E_INVALID_DISTANCE -1

extern long read_distance(int echoPin, int triggerPin);
#endif

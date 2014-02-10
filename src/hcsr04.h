#ifndef HCSR04_GUARD
#define HCSR04_GUARD
// Constants definition
#define MAX_DISTANCE 200

// Error codes definition
#define E_INVALID_DISTANCE -1

extern long read_distance(int echoPin, int triggerPin);
#endif

#define CAYENNE_PRINT Serial
#include "cayenne-particle/cayenne-particle.h"

char auth[] = "YourAuthToken";

void setup()
{
    Serial.begin(9600);
    delay(5000); // Allow board to settle
    Blynk.begin(auth);
}

void loop()
{
    Blynk.run();
}

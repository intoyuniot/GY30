#include <gy30.h>

GY30 gy30;

float lxVal;

void setup()
{
    Wire.begin();
    delay(500);
    gy30.begin();
    Serial.begin(115200);
    delay(500);
}

void loop()
{
    lxVal = gy30.Read();

    Serial.print(lxVal);
    Serial.print("\r\n");

    delay(1000);
}

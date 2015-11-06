

#include <Wire.h>
#include <SFE_ISL29125.h>

// Declare sensor object
SFE_ISL29125 RGB_sensor;

void setup()
{
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize the ISL29125 with simple configuration so it starts sampling
  if (RGB_sensor.init())
  {

  }
}

// Read sensor values for each color and print them to serial monitor
void loop()
{
  // Read sensor values (16 bit integers)
  unsigned int red = RGB_sensor.readRed();
  unsigned int green = RGB_sensor.readGreen();
  unsigned int blue = RGB_sensor.readBlue();
  
  // Print out readings, change HEX to DEC if you prefer decimal output
  Serial.print("$, , , , , , , , , , , , , , , , ");
  Serial.print(red,DEC);
  Serial.print(", ");
  Serial.print(green,DEC);
  Serial.print(", ");
  Serial.print(blue,DEC);
  Serial.print("\n");
  
  
  //Serial.print("Red: "); Serial.println(red,DEC);
  //Serial.print("Green: "); Serial.println(green,DEC);
  //Serial.print("Blue: "); Serial.println(blue,DEC);
  //Serial.println();
  //delay(2000);
}

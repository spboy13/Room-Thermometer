#include <Wire.h>
#include <Adafruit_BMP085.h>


Adafruit_BMP085 bmp;
  
void setup() {
 // Serial.begin(9600);
  if (!bmp.begin()) {
	//Serial.println("Could not find a valid BMP085 sensor, check wiring!");
      digitalWrite(0, HIGH);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(6, LOW);
      delay(500);
	while (1) {}
  }

  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
  
void loop() {
    

    int temp = bmp.readTemperature();

    if(temp <= 30) // blink led 0
    {
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp == 31) // blink led 1
    {
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp == 32) // light led 1
    {
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp == 33) // blink led 2
    {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp == 34) // light led 2
    {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp == 35) // blink led 3
    {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp == 36) // light led 3
    {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp == 37) // blink led 4
    {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp == 38) // light led 4
    {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp == 39) // blink led 5
    {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp == 40) // light led 5
    {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      delay(500);
    }

    else if (temp > 40) // blink led 6
    {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      delay(500);
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(500);
    }
    //Serial.print("Temperature = ");
    //Serial.print(temp);
    //Serial.println(" *C");
    
    //Serial.println();
    //delay(500);
}

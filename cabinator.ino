#include "Keyboard.h"
int power = 5;
int button = 3; 
bool state = LOW;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
pinMode(button, INPUT);
pinMode(power, OUTPUT);
digitalWrite(power, HIGH);
Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeat:
 state = digitalRead(button);
  //Serial.println(state);
  delay(100);
  if (state == HIGH){
    Keyboard.print("Rejected");
    delay(500);
    }

}

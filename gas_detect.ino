#define Buzzer 2
#define Sensor AO

void setup() {
  int value = analogRead(Sensor);
  if (value >= 350) {
    digitalWrite(Buzzer, HIGH);
    delay(500); 
    digitalWrite(Buzzer, LOW);
    delay(500); 
  } else {
    digitalWrite(Buzzer, LOW);
  }
}
 
    

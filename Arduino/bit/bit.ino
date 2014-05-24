
const int ledPin =  9;      
const int sensorPin = A0;    
int time = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  
}

void loop(){
  time = map(analogRead(sensorPin),0,1023,300,5000); 
  digitalWrite(ledPin, HIGH);
  delayMicroseconds(time);
  digitalWrite(ledPin, LOW);
  delayMicroseconds(time);
}


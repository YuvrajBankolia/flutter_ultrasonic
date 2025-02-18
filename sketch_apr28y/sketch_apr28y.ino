#define TRIGpin 5
#define ECHOpin 18
// #define led 6
long duration;
int distance;

void setup() {
  pinMode(TRIGpin, OUTPUT);
  pinMode(ECHOpin, INPUT);
  Serial.begin(9600);
  Serial.println("test of the ultrasonic sensor HC-SR04");
  Serial.println("with the arduino UNOR3 board");
  // pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(TRIGpin, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIGpin, HIGH);
  delayMicroseconds(10);
  
 
  duration = pulseIn(ECHOpin, HIGH);  
   digitalWrite(TRIGpin, LOW);
  

  distance = duration * 0.034 / 2;

  Serial.print("Distance: "); 
  Serial.print(distance);
  Serial.println(" cm");
 

  // if (distance > 10) {
  //   digitalWrite(led, HIGH);
  // } else {
  //   digitalWrite(led, LOW);
  // }

  delay(1000); // Optional delay to slow down serial output
}


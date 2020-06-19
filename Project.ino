int trigPin1=4;
int echoPin1=5;
int relay1=6;
int trigPin2=8;
int echoPin2=9;
int relay2=10;
int trigPin3=11;
int echoPin3=12;
int relay3=13;
void setup() {
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(relay1,OUTPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(relay2,OUTPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(relay3,OUTPUT);
}

void loop() {
 // digitalWrite(relay1,LOW);
  //digitalWrite(relay2,LOW);
  //digitalWrite(relay3,LOW);
  long duration1 = 0, distance1 = 0;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
//  distance1 = (duration1/2) * .034;
  distance1 = (duration1/2) / 29.1;

  Serial.print ( "Sensor1  ");
  Serial.print ( distance1);
  Serial.println("cm");
  
  if (distance1 >= 0 && distance1 <= 30){
    digitalWrite(relay1,HIGH);
  }
  else {
    digitalWrite(relay1,LOW);
  }
  delay(500);
  
  long duration2 = 0, distance2 = 0;
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2= (duration2/2) / 29.1;

  Serial.print("Sensor2  ");
  Serial.print(distance2);
  Serial.println("cm");
   
  if (distance2 >= 0 && distance2 <= 30){
    digitalWrite(relay2,HIGH);
  }
  else {
     digitalWrite(relay2,LOW);
  }
  delay(500);
  
  long duration3 = 0, distance3 = 0;
  digitalWrite(trigPin3, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
  distance3= (duration3/2) / 29.1;

  Serial.print("Sensor3  ");
  Serial.print(distance3);
  Serial.println("cm");
  
  if (distance3 >= 0 && distance3 <= 30){
     digitalWrite(relay3,HIGH);
  }
  else {
     digitalWrite(relay3,LOW);
  }
  
  delay(500);

}

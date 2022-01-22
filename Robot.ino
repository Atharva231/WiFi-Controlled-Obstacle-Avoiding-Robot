int motor1pin1 = 2; 
int motor1pin2 = 3; 
char cl='0'; 
int motor2pin1 = 4; 
int motor2pin2 = 5; 
int p1, p2, p3; 
int c=0; 
void setup() {
  Serial.begin(9600); 
  pinMode (motor1pin1, OUTPUT); 
  pinMode (motor1pin2, OUTPUT); 
  pinMode (motor2pin1, OUTPUT); 
  pinMode (motor2pin2, OUTPUT); 
  pinMode (A0, INPUT); 
  pinMode (A1, INPUT); 
  pinMode (A2, INPUT); 
  digitalWrite (motor1pin1, LOW);
  digitalWrite (motor1pin2, LOW); 
  digitalWrite (motor2pin1, LOW);
  digitalWrite (motor2pin2, LOW); 
  delay (1000);
}
void loop() {
  p1=digitalRead (A0); 
  p2=digitalRead (A1); 
  p3=digitalRead(A2); 
  delay(10);
  if (Serial.available()) {
    cl= (char) Serial.read();
  }
  if (p1&&p2 &&p3) { 
    switch(cl) {
      case '0':
        digitalWrite (motor1pin1, LOW); 
        digitalWrite (motor1pin2, LOW); 
        digitalWrite (motor2pin1, LOW); 
        digitalWrite (motor2pin2, LOW); 
        break;
      case '1':
        digitalWrite (motor1pin1, HIGH); 
        digitalWrite (motor1pin2, LOW); 
        digitalWrite (motor2pin1, HIGH); 
        digitalWrite (motor2pin2, LOW); 
        break;
      case '2':
        digitalWrite (motor1pin1, HIGH); 
        digitalWrite (motor1pin2, LOW); 
        digitalWrite (motor2pin1, LOW); 
        digitalWrite (motor2pin2, HIGH);
        break;
      case '3':
        digitalWrite (motor1pin1, LOW); 
        digitalWrite (motor1pin2, HIGH); 
        digitalWrite (motor2pin1, HIGH); 
        digitalWrite (motor2pin2, LOW); 
        break;
      case '4':
        digitalWrite (motor1pin1, LOW); 
        digitalWrite (motor1pin2, HIGH); 
        digitalWrite (motor2pin1, LOW);
        digitalWrite (motor2pin2, HIGH);
        break;
    }
  }
  else{
    if(!p3) {
      digitalWrite (motor1pin1, LOW); 
      digitalWrite (motor1pin2, HIGH); 
      digitalWrite (motor2pin1, LOW); 
      digitalWrite (motor2pin2, HIGH); 
      delay(1000);
    }
    else if(!p2) { 
      digitalWrite (motor1pin1, HIGH);
      digitalWrite (motor1pin2, LOW); 
      digitalWrite (motor2pin1, LOW); 
      digitalWrite (motor2pin2, HIGH);
    }
    else if(!p1) { 
      digitalWrite (motor1pin1, LOW);
      digitalWrite (motor1pin2, HIGH); 
      digitalWrite (motor2pin1, HIGH); 
      digitalWrite (motor2pin2, LOW);
    }
  }
}

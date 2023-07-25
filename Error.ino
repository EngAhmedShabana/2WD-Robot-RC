// C++ code
//
#define IN1 4; 
#define IN2 5;
#define  IN3 =6; 
const int IN4= 7; 
const int speedR =9; 
const int speedL =10; 
char reading;

void setup()
{ pinMode(IN1 ,OUTPUT);
 pinMode(IN2 ,OUTPUT);
 pinMode(IN3 ,OUTPUT);
 pinMode(IN4 ,OUTPUT);
 pinMode(speedR ,OUTPUT);
 pinMode(speedL ,OUTPUT);
 Serial.begin(9600);
}

void loop()
{if (Serial.available()>0){
  reading=Serial.read();
  switch(reading){
    case'F':analogWrite(speedR,163);
  analogWrite(speedL,163);
  digitalWrite(IN1 ,HIGH);
  digitalWrite(IN2 ,LOW);
  digitalWrite(IN3 ,HIGH);
  digitalWrite(IN4 ,LOW);
  break;

  case'B': digitalWrite(speedR,HIGH);
  digitalWrite(speedL,HIGH);
  digitalWrite(IN1 ,LOW);
  digitalWrite(IN2 ,HIGH);
  digitalWrite(IN3 ,LOW);
  digitalWrite(IN4 ,HIGH);
    break;
    
    case'R':digitalWrite(speedR,LOW);
  digitalWrite(speedL,HIGH);
  digitalWrite(IN1 ,HIGH);
  digitalWrite(IN2 ,LOW);
  digitalWrite(IN3 ,HIGH);
  digitalWrite(IN4 ,LOW);
    break;
    
    case'L':digitalWrite(speedR,HIGH);
  digitalWrite(speedL,LOW);
  digitalWrite(IN1 ,LOW);
  digitalWrite(IN2 ,HIGH);
  digitalWrite(IN3 ,LOW);
  digitalWrite(IN4 ,HIGH);
    break;
    
    case'S':digitalWrite(speedR,LOW);
  digitalWrite(speedL,LOW);
  digitalWrite(IN1 ,HIGH);
  digitalWrite(IN2 ,LOW);
  digitalWrite(IN3 ,HIGH);
  digitalWrite(IN4 ,LOW);
    break;
  }   
} 
}

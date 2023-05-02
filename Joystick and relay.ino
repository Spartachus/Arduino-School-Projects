#define JOYSTICK_X A0
#define JOYSTICK_Y A1
#define JOYSTICK_BUTTON0 6

#define JOYSTICK_A A2
#define JOYSTICK_B A3
#define JOYSTICK_BUTTON1 4

#define JOYSTICK_C A4
#define JOYSTICK_D A5
#define JOYSTICK_BUTTON2 3

#define RELAY1 2
#define RELAY2 3
#define RELAY3 4
#define RELAY4 5

const int JOYSTICK_THRESHOLD = 512;


void setup(){
  Serial.begin(9600);
  pinMode(JOYSTICK_BUTTON0, INPUT);
  pinMode(JOYSTICK_BUTTON1, INPUT);
  pinMode(JOYSTICK_BUTTON2, INPUT);
  
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);
}
 
void loop(){
  int x = analogRead(JOYSTICK_X);
  int y = analogRead(JOYSTICK_Y);
  int button0 = !digitalRead(JOYSTICK_BUTTON0);

  int a = analogRead(JOYSTICK_A);
  int b = analogRead(JOYSTICK_B);
  int button1 = !digitalRead(JOYSTICK_BUTTON1);

  int c = analogRead(JOYSTICK_C);
  int d = analogRead(JOYSTICK_D);
  int button2 = !digitalRead(JOYSTICK_BUTTON2);
 
  
  
   if (joystick1Value < JOYSTICK_THRESHOLD) {
    digitalWrite(RELAY1, HIGH);  // Turn ON relay 1
  } else {
    digitalWrite(RELAY1, LOW);   // Turn OFF relay 1
  }

  if (joystick2Value < JOYSTICK_THRESHOLD) {
    digitalWrite(RELAY2, HIGH);  // Turn ON relay 2
  } else {
    digitalWrite(RELAY2, LOW);   // Turn OFF relay 2
  }

  if (joystick3Value < JOYSTICK_THRESHOLD) {
    digitalWrite(RELAY3, HIGH);  // Turn ON relay 3
  } else {
    digitalWrite(RELAY3, LOW);   // Turn OFF relay 3
  }

  if (joystick4Value < JOYSTICK_THRESHOLD) {
    digitalWrite(RELAY4, HIGH);  // Turn ON relay 4
  } else {
    digitalWrite(RELAY4, LOW);   // Turn OFF relay 4
  } 
  
  
  //serial prints
  Serial.print("X: " + String(x));
  Serial.print(",\tY:" + String(y));
  Serial.println(",\tP: " + String(button0));
  delay(1000);

  Serial.print("A: " + String(a));
  Serial.print(",\tB:" + String(b));
  Serial.println(",\tP: " + String(button1));
  delay(1000);

  Serial.print("C: " + String(c));
  Serial.print(",\tD:" + String(d));
  Serial.println(",\tP: " + String(button2));
  delay(1000);
}

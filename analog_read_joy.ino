#define JOYSTICK_X A0
#define JOYSTICK_Y A1
#define JOYSTICK_BUTTON0 6

#define JOYSTICK_A A2
#define JOYSTICK_B A3
#define JOYSTICK_BUTTON1 4

#define JOYSTICK_C A4
#define JOYSTICK_D A5
#define JOYSTICK_BUTTON2 3

void setup(){
  Serial.begin(9600);
  pinMode(JOYSTICK_BUTTON0, INPUT_PULLUP);
  pinMode(JOYSTICK_BUTTON1, INPUT_PULLUP);
  pinMode(JOYSTICK_BUTTON2, INPUT_PULLUP);
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

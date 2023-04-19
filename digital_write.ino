#define joyX A0

#define joyY A1


int button=6;

int buttonState = 0;

int buttonState1 = 0;


void setup() {

  //pinMode(7,OUTPUT);

  pinMode(button,INPUT);

  digitalWrite(button, HIGH);

  Serial.begin(9600);


  pinMode(8,OUTPUT);

  pinMode(9,OUTPUT);

  pinMode(10,OUTPUT);

  pinMode(11,OUTPUT);

}

 

void loop() {


 int xValue = analogRead(joyX);

 int yValue = analogRead(joyY);

  Serial.print(xValue);

  Serial.print("\t");

  Serial.println(yValue);

  

  buttonState = digitalRead(button);

  Serial.println(buttonState);

  if (xValue>=0 && yValue<=10)

  {

    digitalWrite(10, HIGH);

  }

  else{digitalWrite(10, LOW);}


  if (xValue<=10 && yValue>=500)

  {

    digitalWrite(11, HIGH);

  }

  else{digitalWrite(11, LOW);}


  if (xValue>=900 && yValue>=400)

  {

    digitalWrite(9, HIGH);

  }

  else{digitalWrite(9, LOW);}


  if (xValue>=400 && yValue>=900)

  {

    digitalWrite(8, HIGH);

  }

  else{digitalWrite(8, LOW);}


   if (buttonState == LOW)

  {

    Serial.println("Switch = High");

    digitalWrite(8, HIGH);

    digitalWrite(9, HIGH);

    digitalWrite(10, HIGH);

    digitalWrite(11, HIGH);

    

  }

  else{//digitalWrite(7, LOW);

    }

 // buttonState1 = digitalRead(7);

  Serial.println(buttonState1);

  

  delay(100);

}

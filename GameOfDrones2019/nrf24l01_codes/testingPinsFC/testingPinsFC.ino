void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  pinMode(A6,INPUT);
  pinMode(A7,INPUT);
  pinMode(A8,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("pin 1  :");
  Serial.println(analogRead(A1));
  Serial.print("pin 2  :");
  Serial.println(analogRead(A2));
  Serial.print("pin 3  :");
  Serial.println(analogRead(A3));
  Serial.print("pin 4  :");
  Serial.println(analogRead(A4));
  Serial.print("pin 5  :");
  Serial.println(analogRead(A5));
  Serial.print("pin 6  :");
  Serial.println(analogRead(A6));
  Serial.print("pin 7  :");
  Serial.println(analogRead(A7));
  Serial.print("pin 8  :");
  Serial.println(analogRead(A8));
  delay(2000); 
}

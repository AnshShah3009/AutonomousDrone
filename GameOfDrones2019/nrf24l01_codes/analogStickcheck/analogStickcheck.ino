int pinx=A1;
int piny=A0;
void setup() {
  pinMode(pinx,INPUT);
  pinMode(piny,INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Y: ");
  Serial.println(analogRead(A0));
  Serial.println("X: ");
  Serial.println(analogRead(A1));
  delay(1000);
}

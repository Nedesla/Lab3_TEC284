void setup() {
  pinMode(A6, INPUT);
  int lightLevel = analogRead(A6);
  Serial.begin(9600);
  Serial.println(lightLevel);

}

void loop() {
  // put your main code here, to run repeatedly:

}

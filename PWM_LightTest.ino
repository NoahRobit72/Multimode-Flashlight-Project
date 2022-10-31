// 
int outputPWN = 3;

void setup() {
  pinMode(outputPWN, OUTPUT);
  Serial.begin(9600);

}

void loop() { // duty cycle can go from 0 to 255
  analogWrite(outputPWN, 255);
  Serial.print("LED HIGH");
  delay(5000);
  analogWrite(outputPWN, 150);
  Serial.print("LED MEDIUM");
  delay(5000);
  analogWrite(outputPWN, 75);
  Serial.print("LED LOW");
  delay(5000);

}

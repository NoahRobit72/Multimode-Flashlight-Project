float light1; // first phtoresistor
float light2; // second photoresistor
float light; // average of the resistance values

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  light1 = analogRead(A0);
  light2 = analogRead(A2);
  light = (light1 + light2) / 2;

  // Printing the inputs
  Serial.print("The average is: ");
  Serial.println(light);

  Serial.print("The light1 is: ");
  Serial.println(light1);
  
  Serial.print("The light2 is: ");
  Serial.println(light2);
  
  delay(100);

  if(light < 100) {
    digitalWrite(6, HIGH);
  } else{
    digitalWrite(6, LOW);
    
  }

}

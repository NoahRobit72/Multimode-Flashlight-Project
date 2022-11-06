int pr0 = 0;
int pr1 = 1;
int pr2 = 2; 
int pr3 = 3;
int prAvg;
int out = 6;

void setup() {
  pinMode(out, OUTPUT);
}

void loop() {
  prAvg = (analogRead(pr0) + analogRead(pr1) + analogRead(pr2) + analogRead(pr3)) / 4;
  Serial.print("Avg: ");
  Serial.println(prAvg);

  if(prAvg < 100){
    analogWrite(out, 255);
    
  } else if(prAvg > 300){ 
    analogWrite(out, 0);
    
  } else{ // Medium values
    analogWrite(out, 100);
    
  }
}


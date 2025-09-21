void setup() {
  Serial.begin(9600);//start the talking between IDE and arduino
}

void loop() {
  int rawValue = analogRead(A0); //our sensor talking to us
  
  float voltage = rawValue * (5.0 / 1023.0); //Whatever it says will turn into voltage

  Serial.print(voltage);//print voltage
  Serial.println(" Volts");//print volts right after

  delay(100);//give some time to process the number
}

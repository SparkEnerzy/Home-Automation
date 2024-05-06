void setup() 
{
  pinMode(6, OUTPUT);// connected to S terminal of Relay

}

void loop() {

  digitalWrite(6,HIGH);// turn relay ON
  
  delay(3000);// keep it ON for 3 seconds

  digitalWrite(6, LOW);// turn relay OFF
  
 delay(3000);// keep it OFF for 5 seconds

}

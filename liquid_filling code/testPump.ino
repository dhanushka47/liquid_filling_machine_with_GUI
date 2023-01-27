void testPump(){
//do turn on pump 
  Serial.write("Testing pump ");
digitalWrite(9,HIGH);
delay(5000);
digitalWrite(9,LOW);
  delay(100);
  } 
 

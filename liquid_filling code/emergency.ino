void emergency(){
  
    Serial.write("Emergency");
  digitalWrite(9,LOW);
  digitalWrite(5,HIGH);
  delay(100);
  
Serial.write("Emergency Mode ON");
   }
  
  
  
  
 

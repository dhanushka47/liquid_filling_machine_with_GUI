void testUltraSonic (){

    Serial.write("Testing ultrasonic ");

          long duration, distance; 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); 
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1; 
  
if(distance<30&& distance >1){
  Serial.write("ok");

  }else{
      Serial.write(" sensor not working");
      delay(800);

    }

  }

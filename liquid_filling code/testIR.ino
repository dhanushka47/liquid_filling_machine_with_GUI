void testIR(){
   Serial.write("testing IR");
  for(int i= 0;i<5;i++){
    irsen= digitalRead(7);
    delay(100);
    }

 if(irsen==0){
  Serial.println("Bottle Detected");
  delay(100);
  }else{
     Serial.println("Bottle Not Detected");
     delay(100);
    }

  
  }

#define trigPin 3 
#define echoPin 2


//functions 
void testPump();
void testIR();
void testUltraSonic();
void ledON();
void ledOFF();
void autoMode();
void manualStart();
void manualStop();
void emergency();

int irsen ;
long duration, distance; 


void setup() {

pinMode(5,OUTPUT);   //led pin
pinMode(7,INPUT);
pinMode(9,OUTPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
 
Serial.begin(9600);
Serial.write("Welocome");
delay(2000);

Serial.write("Machine Starting......");
delay(2000);

Serial.write("...... Ready ......");
delay(2000);

  
}

void loop() {
  // check if there is incoming data
  if (Serial.available() > 0) {
    // read the incoming byte
    int incomingByte = Serial.read();
    // check the value of the incoming byte
    if (incomingByte == '1') {
      // perform task 1
      testPump();
      
      } else if (incomingByte == '2') {
      // perform task 2
         testIR();
    }else if (incomingByte == '3') {
      // perform task 3
         testUltraSonic();
    }else if (incomingByte == '4') {
      // perform task 4
         ledON();
    }else if (incomingByte == '5') {
      // perform task 5
         ledOFF();
    }else if (incomingByte == '6') {
      // perform task 6
         autoMode();
    }else if (incomingByte == '7') {
      // perform task 7
        manualStart();
    }else if (incomingByte == '8') {
      // perform task 8
        manualStop();
    }else if (incomingByte == '9') {
      // perform task 9
        emergency();
    }
  }
}

// C++ code
//
const int in1 = 6; 
const int in2 = 5;
const int in3 = 3; 
const int in4 = 9; 

void setup() {
 
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  
  Serial.begin(9600);
}
void loop() {
 if (Serial.available()) { 
   
    char reading = Serial.read();
   
    if (reading == 'F') {
     
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
    }
    else if (reading == 'B') {
  
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);
    }
    else if (reading == 'L') {

  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0); 
    }
    else if (reading == 'R') {
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);  
    }
    else if (reading == 'S') {
  digitalWrite(in1, 1);
  digitalWrite(in2, 1);
  digitalWrite(in3, 1);
  digitalWrite(in4, 1);
    }
  }
}
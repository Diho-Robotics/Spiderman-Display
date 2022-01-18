
int relay = 9; 
int button = 3;  
int val ;     

void setup() {
  pinMode(relay, OUTPUT);  
  pinMode(button, INPUT);    
  Serial.begin(9600);
}

void loop(){
   Serial.println(val);
  val = digitalRead(button);  
  if (val == HIGH) {         
    digitalWrite(relay, HIGH);  
    delay(1000);
  
  } else {
    digitalWrite(relay, LOW);  
  }
}
 

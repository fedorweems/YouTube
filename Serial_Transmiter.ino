

String Message;

void setup() {
  
  Serial.begin(9600);
  delay(100);




}

void loop() {
  
  
  Serial.print("on");
  delay(2500);
  Serial.print("off");
  delay(2500);

  
if (Serial.available()) {
    Message = Serial.readString();  }

//Serial.println(Message);

 


}

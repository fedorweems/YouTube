
String Message;

void setup() {
  
  Serial.begin(9600);
  Serial.setTimeout(50); // default is 1 second
  delay(100);
 pinMode(3, OUTPUT);

} // setup

void loop() {
  // put your main code here, to run repeatedly:
  
if (Serial.available()) {
    Message = Serial.readString(); }


delay(4);
if (Message == "on"){
  digitalWrite(3, HIGH); }
if (Message == "off"){
  digitalWrite(3, LOW); }  
//Message = "\0";
}   // loop


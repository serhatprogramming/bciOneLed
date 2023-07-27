char attentionData;
int redLED = 10;


void setup() {
  // put your setup code here, to run once:

pinMode(redLED, OUTPUT);
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
while (Serial.available() > 0){
attentionData = Serial.read();
}
  
if (attentionData >= 0 && attentionData < 60){
  digitalWrite(redLED, LOW);
}
  
if (attentionData >= 60 && attentionData < 100){
  digitalWrite(redLED, HIGH);
}
  
}

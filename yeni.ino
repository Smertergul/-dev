#define led 7
#define buton 8


void setup() 
{
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(buton, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(buton) ==1){
  digitalWrite(led,HIGH);
}else{
  digitalWrite(led,LOW);
}
}

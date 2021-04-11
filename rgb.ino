int redLED=11;
int blueLED=10;
int greenLED=9;


void setup()
 
{
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop()
{
  rgb_light(255,0,0);
   delay(1000);
  rgb_light(0,255,0); 
   delay(1000);
  rgb_light(0,0,255); 
   delay(1000);
}
    
  void rgb_light(int red_value,int green_value,int blue_value){
    analogWrite(redLED,red_value);
    analogWrite(greenLED,green_value);
    analogWrite(blueLED,blue_value);
    
}

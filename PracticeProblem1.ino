void setup() {
  for(int i=2;i<=5;i++)pinMode(i,OUTPUT);
  pinMode(6,INPUT_PULLUP);
  randomSeed(analogRead(0));

}
int generateRandomNumber(){
  return random(1,1000);
  }
void lightLed(int number){
    switch(number){
      case 1: 
        digitalWrite(4,HIGH);
      
      }
  }
void loop() {
  if(!digitalRead(6)){
    
    }
}
   

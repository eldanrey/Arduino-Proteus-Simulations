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
        digitalWrite(5,HIGH);
        break;
      case 2:
        digitalWrite(2,HIGH);
        break;
      case 3:
        digitalWrite(2,HIGH);
        digitalWrite(5,HIGH);
        break;
      case 4:
        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);
        break;
      case 5:
        digitalWrite(2,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
        break;
      case 6:
        for(int i=2;i<=4;i++)digitalWrite(i,HIGH);
        break;
      }
  }
void offLed(){
  for(int i=2;i<=5;i++)digitalWrite(i,LOW);
  }
void loop() {
  if(!digitalRead(6)){
    offLed();
    for(int i=0;i<10;i++){
      lightLed((generateRandomNumber()%6)+1);
      _delay_ms(100);
      offLed();
      _delay_ms(100);
      }
      lightLed((generateRandomNumber()%6)+1);
      _delay_ms(1500);
    }
}
   

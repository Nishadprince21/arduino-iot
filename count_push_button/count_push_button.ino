const int BUTTON_PIN = 7; 
const int led =9;
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=8;
int g=10;
#define t 10       
const int DEBOUNCE_DELAY = 50;   
int lastSteadyState = LOW;      
int lastFlickerableState = LOW;  
int currentState;      
unsigned long lastDebounceTime = 0;  
int pressed=0;
void setup() {
  
  Serial.begin(9600);
  
  pinMode(BUTTON_PIN, INPUT);
  pinMode(led,OUTPUT);

  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  
}

void loop() {
 
  currentState = digitalRead(BUTTON_PIN);

  
  if (currentState != lastFlickerableState) {
   
    lastDebounceTime = millis();
   
    lastFlickerableState = currentState;
  }

  if ((millis() - lastDebounceTime) > DEBOUNCE_DELAY) {
   
    if (lastSteadyState == HIGH && currentState == LOW){
      Serial.println("The button is released");
    
      }
    else if (lastSteadyState == LOW && currentState == HIGH){
      Serial.println("The button is pressed");
      pressed++;
      }
     

    
    lastSteadyState = currentState;
  }
  
  if(pressed==1){
digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
   delay(t);
   }
  //2
  else if(pressed==2){
 digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
   delay(t);}
  //3
  else if(pressed==3){
 digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
   delay(t);}
  //4
  else if(pressed==4){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
   delay(t);}
  //5
  else if(pressed==5){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
   delay(t);}
  //6
  else if(pressed==6){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
   delay(t);}
  //7
  else if(pressed==7){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
   delay(t);}
  //8
  else if(pressed==8){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
   delay(t);}
  //9
  else if(pressed==9){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
   delay(t);}
  //0
  else {
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
    delay(t);
    }

  if(pressed==10){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }  

}
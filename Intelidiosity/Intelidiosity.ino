int mA1=4;
int mA2=5;
int mB1=6;
int mB2=7;
int mC1=8;
int mC2=9;
int mD1=10;
int mD2=11;

int entrada1=2;
int entrada2=3;
int entrada3=12;

void setup() {
  pinMode(mA1,OUTPUT);
  pinMode(mA2,OUTPUT);
  pinMode(mB1,OUTPUT);
  pinMode(mB2,OUTPUT);
  pinMode(mC1,OUTPUT);
  pinMode(mC2,OUTPUT);
  pinMode(mD1,OUTPUT);
  pinMode(mD2,OUTPUT);
  
  pinMode(entrada1,INPUT);
  pinMode(entrada2,INPUT);
  pinMode(entrada3,INPUT);

}

void loop() {
  if(digitalRead(entrada1)==LOW && digitalRead(entrada2)==LOW && digitalRead(entrada3)==LOW)  alto();
  if(digitalRead(entrada1)==HIGH && digitalRead(entrada2)==HIGH && digitalRead(entrada3)==HIGH)  adelante();
  if(digitalRead(entrada1)==HIGH && digitalRead(entrada2)==LOW && digitalRead(entrada3)==LOW)    atras();
  if(digitalRead(entrada1)==LOW && digitalRead(entrada2)==HIGH && digitalRead(entrada3)==LOW)  girar1();
  if(digitalRead(entrada1)==LOW && digitalRead(entrada2)==LOW && digitalRead(entrada3)==HIGH)  girar2();
}

void adelante(){
  digitalWrite(mA1,LOW);
  digitalWrite(mA2,HIGH);
  
  digitalWrite(mB1,HIGH);
  digitalWrite(mB2,LOW);
  
  digitalWrite(mC1,LOW);
  digitalWrite(mC2,HIGH);
  
  digitalWrite(mD1,LOW);
  digitalWrite(mD2,HIGH);
}

void alto(){
  digitalWrite(mA1,LOW);
  digitalWrite(mA2,LOW);
  
  digitalWrite(mB1,LOW);
  digitalWrite(mB2,LOW);
  
  digitalWrite(mC1,LOW);
  digitalWrite(mC2,LOW);
  
  digitalWrite(mD1,LOW);
  digitalWrite(mD2,LOW);
}

void atras(){
  digitalWrite(mA1,HIGH);
  digitalWrite(mA2,LOW);
  
  digitalWrite(mB1,LOW);
  digitalWrite(mB2,HIGH);
  
  digitalWrite(mC1,HIGH);
  digitalWrite(mC2,LOW);
  
  digitalWrite(mD1,HIGH);
  digitalWrite(mD2,LOW);
}

void girar1(){
  digitalWrite(mA1,HIGH);
  digitalWrite(mA2,LOW);
  
  digitalWrite(mB1,LOW);
  digitalWrite(mB2,HIGH);
  
  digitalWrite(mC1,LOW);
  digitalWrite(mC2,HIGH);
  
  digitalWrite(mD1,LOW);
  digitalWrite(mD2,HIGH);
}

void girar2(){
  digitalWrite(mA1,LOW);
  digitalWrite(mA2,HIGH);
  
  digitalWrite(mB1,HIGH);
  digitalWrite(mB2,LOW);
  
  digitalWrite(mC1,HIGH);
  digitalWrite(mC2,LOW);
  
  digitalWrite(mD1,HIGH);
  digitalWrite(mD2,LOW);
}

  int x;
int array[100];
int motor1_in1=4;
int motor1_in2=5;
void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(motor1_in1,OUTPUT);
  pinMode(motor1_in2,OUTPUT);
  
}

void loop() {
  int c=0;
  int i=0;
  int z=0;
  for(i=0;i<10;i++) 
  {
    x=analogRead(A0);
    Serial.println(x);
    delay(500);
    array[i]=x;
    analogWrite(motor1_in1,255);
    analogWrite(motor1_in2,0);
    if(array[i]>100)
      { 
        c=c+1;
        //Serial.println(c);
      }
  }
  if(c<3)
  {
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    Serial.println("alaram");
    delay(1000);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    analogWrite(motor1_in1,255);
    analogWrite(motor1_in2,150);
     for(i=0;i<5;i++) 
  {
    analogWrite(motor1_in1,255);
    analogWrite(motor1_in2,150);
    x=analogRead(A0);
    Serial.println(x);
    delay(500);
    array[i]=x;
    if(array[i]>100)
      { 
        z=z+1;
        //Serial.println(c);
      }
  }
  if(z<2)
  {
    analogWrite(motor1_in1,255);
    analogWrite(motor1_in2,250);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    Serial.println("alaram");
    delay(10000);
    analogWrite(motor1_in1,255);
    analogWrite(motor1_in2,250);
    delay(1000);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    }
    
    
    }
      
    

}

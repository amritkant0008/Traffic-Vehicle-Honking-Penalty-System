int red1 =13;
//intializing 
int yellow1=12;
int green1=11;
int soundPin=0;
#define segmentA 7
#define segmentB 6
#define segmentC 5
#define segmentD 4
#define segmentE 3
#define segmentF 2
#define segmentG 1
int i,j,r=1;
int temp=0;

void setup() {
  for(int i=11;i<=13;i++)
  pinMode(i,OUTPUT);
  pinMode(soundPin,INPUT);
  pinMode(segmentA , OUTPUT); 
  pinMode(segmentB , OUTPUT);
  pinMode(segmentC , OUTPUT);
  pinMode(segmentD , OUTPUT);
  pinMode(segmentE , OUTPUT);
  pinMode(segmentF , OUTPUT);
  pinMode(segmentG , OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  delay(2000);
  int soundValue=digitalRead(soundPin);
  for(j=0;j<=100;j++){
  if(soundValue==HIGH)
  {
    red1_on();
    for(i = 7; i>=0; i--)
  {
     show_number(i);
    delay(1000);
  }
    
  }
  else
  {
    red1_on();
    for(i = 5; i>=0; i--)
  {
     show_number(i);
    delay(1000);
  }
  }
    yellow1_on();
    for(i = 5; i>=0; i--)
  {

     show_number(i);
    delay(1000);
    if(soundValue==HIGH)
    {
      temp=1;
      break;
    }
  }
  if(temp==1)
  {
    temp=0;
    continue;
  }
    green1_on();
    for(i = 5; i>=0; i--)
  {
     show_number(i);
    delay(1000);
  }
  }
}
  // put your main code here, to run repeatedly:


void green1_on()
{
  digitalWrite(green1, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, LOW);
}

void yellow1_on()
{
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(red1, LOW);
}

void red1_on()
{
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, HIGH);
}
// This function displays numbers from 0 to 9
void show_number(int num)  
{
  switch(num)
  {
    case 0:  
    digitalWrite(segmentA, LOW); 
    digitalWrite(segmentB, LOW); 
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, LOW);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, HIGH); 
    break;
    case 1:  
    digitalWrite(segmentA, HIGH);  
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, HIGH);  
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, HIGH);
    digitalWrite(segmentG, HIGH);
    break;
    case 2:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, HIGH);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, LOW);
    digitalWrite(segmentF, HIGH);
    digitalWrite(segmentG, LOW);
    break;
    case 3:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, HIGH);
    digitalWrite(segmentG, LOW);
    break;
    case 4:
    digitalWrite(segmentA, HIGH);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, HIGH);
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, LOW);
    break;
    case 5:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, HIGH);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, LOW);
    break;
    case 6:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, HIGH);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, LOW);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, LOW);
    break;
    case 7:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, HIGH);
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, HIGH);
    digitalWrite(segmentG, HIGH);
    break;
    case 8:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, LOW);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, LOW);
    break;
    case 9:
    digitalWrite(segmentA, LOW);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, HIGH);
    digitalWrite(segmentF, LOW);
    digitalWrite(segmentG, LOW);
    break;
    default:
    digitalWrite(segmentA, HIGH);
    digitalWrite(segmentB, LOW);
    digitalWrite(segmentC, LOW);
    digitalWrite(segmentD, LOW);
    digitalWrite(segmentE, LOW);
    digitalWrite(segmentF, HIGH);
    digitalWrite(segmentG, LOW);
    break;
  }
}

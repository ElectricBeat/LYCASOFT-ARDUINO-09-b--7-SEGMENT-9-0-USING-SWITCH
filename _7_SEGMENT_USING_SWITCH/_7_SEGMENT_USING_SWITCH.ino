int count;
const int SW=9;

const int  arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
//const int arr[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x98};

int val;
int once=0,cnt=9;

void setup()
{
  for( count= 0; count < 7; count ++ )
  {
    pinMode(count, OUTPUT);
  }
  pinMode(SW,INPUT);  
  pinMode(11,OUTPUT);
} 
void loop()
{
  val=digitalRead(SW);
  digitalWrite(11, HIGH);
  delay(120);
  
  if(val != LOW)
  {
    if(once==0)
    {
      PORTD = arr[cnt];
      delay(10);
      
      cnt--;
      if(cnt<0)
      {
        cnt=9;
      } 
      once=1;
    }
  }
  else
  {
    once=0;
  }  
} 

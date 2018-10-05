/* int a[50]={};
int myArray[10]={9,3,2,4,3,2,7,8,9,11};
*/
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available())
{
  /*
   *while(Serial.read()=='0');
  for(int i=0;i<4;i++)
  {
   a[i]=Serial.read(); 
  }
}
  for(int i=0;i<4;i++)
  {
   Serial.println(a[i]);
  }
   */delay(10);
 char a=Serial.read();
 Serial.println("Outside");
 Serial.println(a);
  if(a!='0')
  {
    Serial.println("Inside");
    Serial.println(a);
  }
}
}

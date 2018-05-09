int array[20]={30};
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<20;i++)
{
    Serial.println(array[i]);
}
Serial.print("Done");
}

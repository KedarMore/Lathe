//............Global Variables
int flag=0;
float array[];
int xPosCurrent,yPosCurrent;

//............Initialization
#include <LiquidCrystal.h>//Display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#include <Stepper.h>
const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor
// initialize the stepper library on pins 8 through 11:
Stepper myStepperX(stepsPerRevolution, 8, 9, 10, 11);
Stepper myStepperY(stepsPerRevolution, 8, 9, 10, 11);
Stepper myStepperSan(stepsPerRevolution, 8, 9, 10, 11);

void setup()
{
    //........Pinmodes
    //........The setup begins
    lcd.begin(16,2);
    //........HERE THE ACTUAL PROCESS STARTS
    while(enterPin==LOW)
    {
    display("place and clamp and press enter");//scanning the work piece
    flag=1;//consider these as leds....as used in washing machine
    }
    flag=2;
    scan();
}

void loop()
{

}

//.................all the functions...................//

float dist()
{
    unsigned long t1;
    unsigned long t2;
    unsigned long pulse_width;
    float mm;
    //float inches;
  
    // Hold the trigger pin high for at least 10 us
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);
  
    // Wait for pulse on echo pin
    while ( digitalRead(ECHO_PIN) == 0 );
  
    // Measure how long the echo pin was held high (pulse width)
    // Note: the micros() counter will overflow after ~70 min
    t1 = micros();
    while ( digitalRead(ECHO_PIN) == 1);
    t2 = micros();
    pulse_width = t2 - t1;
  
    // Calculate distance in centimeters and inches. The constants
    // are found in the datasheet, and calculated from the assumed speed
    //of sound in air at sea level (~340 m/s).
    mm = pulse_width / 5.80;
    return mm;
}

void display(string a)
{
    lcd.print(a);
}

void scan()
{
    int i=0,flag;
    while(upPin==LOW)
    {
        array[i]=dist();
        i++;
        flag=0;
        if(dist()>100)//this denotes that the work piece ended
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        display("such a long w/p cant be made");//then what? will they reset the machine
    }
    i=maxLength;
}

void writePos(x,y)
{
    if(x<xPosCurrent)//this is for x stepper
    {
    for(i=xPosCurrent;i>=x;i--)
    {
        myStepperX.step(-1);
    }
    x=xPosCurrent;
    }
    else
    {
        for(i=xPosCurrent;i<=x;i++)
        {
            myStepperX.step(1);
        }
    }
    if(y<yPosCurrent)//this is for x stepper
    {
    for(i=yPosCurrent;i>=y;i--)
    {
        myStepperY.step(-1);
    }
    y=yPosCurrent;
    }
    else
    {
        for(i=yPosCurrent;i<=y;i++)
        {
            myStepperY.step(1);
        }
    }
}

void cut()
{
    for(i=0;i<=maxLength;i++)//check if the work piece is tapering continously
    {
        if(array[i]<=array[i+1])
        {
            continue;
        }
        flag=1;
    }
    for()
}
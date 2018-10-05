/*           __  ____       __
        |   |__|   |  |__| |__
        |__ |  |   |  |  | |__
*/
//............Global Variables
//int flag=0;
float array[];
float tapperdownarray[]={200};
int xPosCurrent,yPosCurrent;
int maxLength,maxDia;//these are work piece dimensions
int stockLength=maxLength+50,stockDia;//these are stock dimensions

//............Initialization
#include <LiquidCrystal.h>//Display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#include <Stepper.h>
const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor
// initialize the stepper library on pins 8 through 11:
Stepper myStepperX(stepsPerRevolution, 8, 9, 10, 11);
Stepper myStepperY(stepsPerRevolution, 8, 9, 10, 11);
Stepper myStepperScan(stepsPerRevolution, 8, 9, 10, 11);

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
    maxLength=i-1;
    display("your stock length should be");
    delay(2000);
    //display a number
}

void checkForSurface(float a[])//this is to check the taper and straight surface
{
    float velocity[];
    for(i=0;i<=maxLength;i++)
    {
        velocity[i]=a[i+1]-a[i];//negetive and positive values will tell us the shape
        //if we want curved surfaces accelaration should be taken into consideration
    }
}

void writePos(x,y)
{
    if(x<xPosCurrent)//this is for x stepper
    {
      for(i=xPosCurrent;i>=x;i--)
      {
          myStepperX.step(-1);                     //move 1 step towards the origin
      }
    }
    else
    {
      for(i=xPosCurrent;i<=x;i++)
     {
         myStepperX.step(1);                  //move 1 step away from origim.
     }
    }
    if(y<yPosCurrent)//this is for x stepper
    {
      for(i=yPosCurrent;i>=y;i--)
      {
          myStepperY.step(-1);
      }
    }
    else
    {
        for(i=yPosCurrent;i<=y;i++)
        {
            myStepperY.step(1);
        }
      }
    xPosCurrent=x;
    yPosCurrent=y;
}

void cut()
{
    for(i=0;i<=maxLength;i++)//check if the work piece is tapering continously
    {
        if(array[i]<array[i+1])
        {
            flag=0;
            break;
        }
        flag=1;
    }

    if(flag==1)//this is for tapering
    {
        writePos(stockDia+1,-1);//facing
        for(i=0;i<=20;i++)//i is y position
        {
            writePos(stockDia+1,i);
            writePos(0,i);
            writePos(stockDia+1,i);
        }//facing ends
        for(i=0;i>=)//turning
        //here according to the shape the next 3 functions are called
    }
}

//straight cut
void straight(int start, int finish)
{
    tool(1);
    dia=array[start];

    /*
              ___________dia
             |           |
             |           |
             |           |maxDia
           finish      start
    */
    for(i=maxDia+1;i>=dia;i--)//starting from maxDia+1 just to ensure safety
    {
        writePos(i,start);
        writePos(i,finish);
        writePos(i,start);
    }
}

//forward taper
void forwardTaper(int start, int finish)
{
    tool(2);
    startDia=array[start];
    finishDia=array[finish];
    yInc=1*(finish-start)/(finishDia-startDia);//angle of taper
    /*this formula tell the myStepperY where to stop if it is at a particular diameter
                   /startDia
                  /               1 will be the incremental distance of the diameters
                 /                yInc will be that of start to finish
                /
               /finishDia
    */

    for(i=finishDia;i>=startDia;i--)
    {
        wirtePos(i,start);
        writePos(i,finish);
        writePos(i,start);
        finish=finish-yInc;
    }
}

//backward taper
void backwardTaper(int start, int finish)
{
    tool(3);
    startDia=array[start];
    finishDia=array[finish];
    yInc=1*(finish-start)/(startDia-finishDia);
    
    /*         finishDia\
                         \
                          \
                           \
                    startDia\
    */

    for(i=startDia;i>=finishDia;i--)
    {
        writePos(i,finish);
        writePos(i,start);//here the position of start will change
        writePos(i,finish);
        start=start-yInc;
    }
}

//tool change
void tool(int number)
{
    switch (number)
    {
        case 1://V-Tool
        display("insert V-tool and fix properly");
        display("change to the diffent fixed position");
        xPosCurrent=xPosCurrent-valeX;//here the current position is changed
        yPosCurrent=yPosCurrent-valeY;//due to the change in orientation of the tool
                                      // possibly use a pin to check confirm that the tool is placed
        break;
        case 2://parting Tool for forwardTaper
        display("insert parting tool and fix properly");
        display("change to the diffent fixed position");
        xPosCurrent=xPosCurrent+valeX;//here the current position is changed
        yPosCurrent=yPosCurrent+valeY;//due to the change in orientation of the tool
                                     // possibly use a pin to check confirm that the tool is placed
        break;
        case 3://parting Tool for backwardTaper
        display("insert parting tool and fix properly");
        display("change to the diffent fixed position");
        xPosCurrent=xPosCurrent+valeX;//here the current position is changed
        yPosCurrent=yPosCurrent+valeY;//due to the change in orientation of the tool
                                      // possibly use a pin to check confirm that the tool is placed
        break;
        default:break;
    }
}
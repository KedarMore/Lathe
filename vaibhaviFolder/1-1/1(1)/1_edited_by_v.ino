/*
*/
//............Global Variables
int flag=0;
float array[];
float tapperdownarray[],tapperuparray[],normalarray[];
int xPosCurrent,yPosCurrent;
int maxLength,maxDia;                                   //these are work piece dimensions
int stockLength=maxLength+50,stockDia;                  //these are stock dimensions

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
    maxLength=i;
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
    for(i=maxDia;i>dia;i--)
    {
        writePos(i-1,start);
        writePos(i-1,finish);
        writePos(i-1,start);
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

    for(i=startDia;i<=finishDia;i++)
    {
        wirtePos(i-1,start)
        writePos(i-1,finish)
        writePos(i-1,start)
        finish=finish-yInc;
    }
}

//backward taper
void backwardTaper(int start, int finish)
{
    tool(3);
    /*         finishDia\
                         \
                          \
                           \
                    startDia\
    */
}

//tool change
void tool(number)
{
    switch (number)
    {
        case 1://V-Tool
        display("insert V-tool and fix properly");
        display("change to the diffent fixed position");
        xPosCurrent=xPosCurrent-valeX;//here the current position is changed
        yPosCurrent=yPosCurrent-valeY;//due to the change in orientation of the tool
        break;
        case 2://parting Tool for forwardTaper
        display("insert parting tool and fix properly");
        display("change to the diffent fixed position");
        xPosCurrent=xPosCurrent+valeX;//here the current position is changed
        yPosCurrent=yPosCurrent+valeY;//due to the change in orientation of the tool
        break;
        case 3://parting Tool for backwardTaper
        display("insert parting tool and fix properly");
        display("change to the diffent fixed position");
        xPosCurrent=xPosCurrent+valeX;//here the current position is changed
        yPosCurrent=yPosCurrent+valeY;//due to the change in orientation of the tool
        break;
    }
}

int t_up=0;
    int t_down=0;
    int n=0;
    for(i=0;i<=maxLength;i++)//check if the work piece is tapering continously
    {
        if(array[i]>array[i+1])
        {
            tapperuparray[t_up]=i;
            for(j=i;array[j]>array[j+1];j++)
            {
                if(array[j]>array[j+1])
                {
                    tapperuparray[t_up++]=j;
                    //int shape
                    break;
                }
            }
            t_up++;
        }
        if(array[i]<array[i+1])
        {
            tapperdownarray[t_down]=i;
            for(j=i;array[j]<array[j+1];j++)
            {
                if(array[j]<array[j+1])
                {
                    tapperdownarray[t_down++]=j;
                    break;
                }
            }
            t_down++;
        }
        if(array[i]==array[i+1])
        {
            normalarray[n]=i;
            for(j=i;array[j]==array[j+1];j++)
            {
                if(array[j]!=array[j+1])
                {
                    normalarray[n++]=j;
                }
            }
            n++;
        }
    }
    int next=action(0);
    int action(int i)
    {
        if(tapperuparray[i]<tapperdownarray[i])
        {
            if(tapperuparray[i]<normalarray[i])
            {
                //perform tapper up and return endpoint
            }
            elseif(tapperuparray[i]>normalarray[i])
            {
                //perform normal
            }
            else
            {
                //perform tapper down
            }
        }
    }
    taper(int a,int b)
    {
        writePos(stockDia,stockLength-j)

    }
}

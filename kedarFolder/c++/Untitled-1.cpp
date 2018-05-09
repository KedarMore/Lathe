#include <Stepper.h>
#include <LiquidCrystal.h>
stepsPerRevolution=360;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
#define y[];
#define case;
void setup
{
    display ("Insert your sample and fasten it securely");
    if(checkWP()==1)
    {
        display("Sample placed");
        while(dist()==0)
        {
            myStepper.step(1);
        }
        int i=0;
        while(dist()!=0)//here we will check the shape and input will be taken
        {
            y[i]=dist();
            myStepper.step(1);
            i++;
            if(digitalRead(inputFromWorkPieceUP)==1)
            {
                y[i]=0;//this is for later use
                --i=yMax;
                break;
            }
        }
        while(digitalRead(inputFromWorkPieceDOWN)==0)
        {
            myStepper.step(-360);
        }
    }
    display("You may now remove the sample.")
    if(checkWP()==0)
    {
        display("Sample removed");
    }
    //now the input is taken and placing the tool at right position
    while(yStress()==0)
    {
    myStepperY.step(-1);
    }
    while(yStress()==1)
    {
    yPosition=0;
    }
}

int StepToLength(char orientation,int steps)//this is for Stepper motors
{
    if(orientation==y)
    {
        length=steps*100;//100 is any arbitary constant
    }
    else if(orientation==x)
    {
        length=steps*100;//100 is any arbitary constant
    }
}

int LengthToStep(char orientation,int length)//this is for Stepper motors
{
    if(orientation==y)
    {
        step=length/100;//100 is any arbitary constant
    }
    else if(orientation==x)
    {
        step=length/100;//100 is any arbitary constant
    }
}

int showPositionX()//please return to this because its waste of space
{                  //you could insert writePosition with the Stepper.step
    global int xPos;//as it will assign a certain value to current position
    return xPos;    //as for showPosition you wont need it much
}

void writePositionX(int value)//here you have to link this global variable with the variable in stepper library
{
    global int xPos=value;
}

#define pos=yMax;
void loop()
{
    switch(task)
    {
        case 1://this is rough cutting stage
        {
            for(i=0;i++;i<=yMax)
            {
                y[i]<=y[i+1]?::continue:WPshape=0;
            }
            if(WPshape==1)//what if the shape is not as expectedthen what?? please think on it!!
            {
                myStepperX.steps(LengthToStep(y[pos]);
                myStepperY.steps(LengthToStep(pos));
                pos--;
            }
            if(pos==0)
            {
                task=2;
            }
        }
        break;
        
        case 2://this is for exact shape
        {

        }
    }
}
#include <Stepper.h>
 int stepsPerRevolution = 360;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
#define y[];
#define case;
void setup()
{
  display ("Insert your sample and fasten it securely");
  if (checkWP() == 1)
  {
    while (dist() == 0)
    {
      myStepper.step(1);
    }
    int i = 0;
    while (dist() != 0)
    {
      y[i] = dist();
      myStepper.step(1);
      i++;
      if (digitalRead(inputFromWorkPieceUP) == 1)
      {
        break;
      }
    }
    while (digitalRead(inputFromWorkPieceDOWN) == 0)
    {
      myStepper.step(-360);
    }
  }
  display("You may now remove the sample.")
}

void loop()
{

}

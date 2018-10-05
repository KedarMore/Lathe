#include <Servo.h>
//
// ....................................................Basic code 1
// go

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() >= 0) //do the changes in app wait... ek suchla.
  {
    for (int i = 0;; i++;) //take value from app
    {
      mainArray[i] = Serial.read();
    }
  } ............// ithe ek bug yenar ahe ha nantar... tevha baghu toh.../

  // Array is received
  //ata majha code..organize vala..?
  organizeData(mainArray[]);
}

organizeData(array1[])
{

  float taperuparray[], taperdownarray[], normalarray[];  /*These arrays store the positions for all
                                                         three different shapes*/
  int t_up = 0, t_down = 0, n = 0;
  int i = 0;
  for (int i = 0; i <= maxLength; i++)
  {
    if (array[i] > array[i + 1])                 // This indicates backwardTaper
    {
      taperuparray[t_up] = i;                 //Start for backwardTaper
      for (j = i; array[j] > array[j + 1]; j++)
      {
        if (array[j] < array[j + 1])
        {
          taperuparray[t_up++] = j;       //Finish for backwardTaper
          i = j;                             /*update the position for array[] so that vaues between i and j
                                                   are not again considered*/
          t_up++;                          //update to store the next start for next backwardTaper
          break;
        }
      }
    }
    if (array[i] < array[i + 1])               // This indicates forwardTaper
    {
      taperdownarray[t_down] = i;           //Start for forwardTaper
      for (j = i; array[j] < array[j + 1]; j++)
      {
        if (array[j] > array[j + 1])
        {
          taperdownarray[t_down++] = j;  //finish for forwardTaper
          i = j;
          t_down++;
          break;
        }
      }
    }
    if (array[i] == array[i + 1])                //This indicates straight
    {
      normalarray[n] = i;                      //Start for straight
      for (j = i; array[j] == array[j + 1]; j++)
      {
        if (array[j] != array[j + 1])
        {
          normalarray[n++] = j;            //finish for straight
          i = j;
          n++;
          break;
        }
      }
    }
  }
}
void action()
{
  // First straight shapes should be cut
  int element = n + 1;
  while (element != 0)
  {
    int temp = normalarray[0];                    //find largest Dia
    for (int i = 1; i <= n; i++)
    {
      if (normalarray[i] > temp)
      {
        temp = normalarray;
        int temp_pos = i;
      }
    }
    int flag = 0;
    for (int i = 0; i < temp_pos; i++)
    {
      if (normalarray[i] == 0 && normalarray[i + 1] == 0)
      {
        flag = 1;
      }
    }
    if (flag = 0)                                    // This is no large dia straight section before
    {
      straight(0, normalarray[temp_pos + 1]);      // So we can cut from origin to the finish point
    }
    else
    { // but if there is some previous straight portions
      straight(normalarray[temp_pos], normalarray[temp_pos + 1]); /* we should start from the section start point
                                                                    instead of origin
                                                                    example in case of such workpiece
                                                                               __________
                                                                               |        |
                                                                        _______|        |_________
                                                                ________|                         |_____
*/
    }
    normalarray[temp_pos] = 0;                       // This will remove the values of
    normalarray[temp_pos + 1] = 0;                   // processed section of stock
    element = element - 2;
  }
  // Perform tappering
  while (t_down >= 0)
  {
    forwardTaper(taperdownarray[t_down - 1], taperdownarray[t_down]);
    t_down = t_down - 2;
  }
  while (t_up >= 0)
  {
    backwardTaper(taperuparray[t_up - 1], taperuparray[t_up]);
    t_up = t_up - 2;
  }
}
}

//your code
//cut

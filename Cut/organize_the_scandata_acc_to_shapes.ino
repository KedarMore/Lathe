int t_up=0;
int t_down=0;
int n=0;
int i=0;
while(i<=maxLength)
{
    if(array[i]>array[i+1])                      // This indicates backwardTapper
    {
        tapperuparray[t_up]=i;                   //Start for backwardTapper
        for(j=i;array[j]>array[j+1];j++)
        {
            if(array[j]<array[j+1])
            {
                tapperuparray[t_up++]=j;         //Finish for backwardTapper 
                i=j;                             /*update the position for array[] so that vaues between i and j
                                                   are not again considered*/
                t_up++;                          //update to store the next start for next backwardTapper
                break;
           }
        }
        
    }
    if(array[i]<array[i+1])                    // This indicates forwardTapper
    {
        tapperdownarray[t_down]=i;             //Start for forwardTapper
        for(j=i;array[j]<array[j+1];j++)
        {
            if(array[j]>array[j+1])
            {
                tapperdownarray[t_down++]=j;    //finish for forwardTapper
                i=j;
                t_down++;
                break;
            }
        }            
    }
    if(array[i]==array[i+1])                     //This indicates straight
    {
        normalarray[n]=i;
        for(j=i;array[j]==array[j+1];j++)        //Start for straight
        {
            if(array[j]!=array[j+1])
            {
                normalarray[n++]=j;              //finish for straight
                i=j;
                n++;
                break;
            }
        }
    }
    i++;
}

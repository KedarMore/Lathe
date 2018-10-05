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
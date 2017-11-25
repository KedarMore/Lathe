//changes were made

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

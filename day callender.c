#include<stdio.h>
#include<stdlib.h>

int main()
{
    int year,diff,nyr,lyr,totdy,dy,count=0,i;
    printf("Enter the year : ");
    scanf("%d",&year);
    for(i=1990; i<=year; i++)
    {
        if(i%4==0)
            count++;
    }
    diff=year-1990;
    lyr=count;
    nyr=(diff-lyr);
    totdy=(lyr*366)+(nyr*365);
    dy=totdy%7;
    if(dy==0)
        printf("Monday");
    if(dy==1)
        printf("Tuesday");
    if(dy==2)
        printf("Wednesday");
    if(dy==3)
        printf("Thursday");
    if(dy==4)
        printf("Friday");
    if(dy==5)
        printf("Saturday");
    if(dy==6)
        printf("Sunday");

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int length,i,max=1,count=1,j;
    printf("Enter length of array");
    scanf("%d",&length);
    int a[length];

    for(i=0; i<length; i++)
        scanf("%d",&a[i]);
    for(j=1; j < length; j++)
    {
        if(a[j] > a[j-1])
            count++;
        else
            count=1;
        if(max < count)
            max=count;
    }
    printf("\nMaximum length of sequential number is %d \n\n",max);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20],i,n,max,min,mincount=0,maxcount=0;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("\nEnter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
            maxcount++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==min)
            mincount++;
    }
    printf("Maximum number is =%d \nMinimum number is =%d \n",max,min);
    printf("\nFrequency of Maximum element=%d  \nFrequency of Minimum element=%d\n\n\n",maxcount,mincount);
}


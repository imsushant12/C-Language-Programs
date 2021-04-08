#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i,j,x,min=0,max=0,index1,index2;

    printf("\nEnter number of elements :");
    scanf("%d",&n);
    int a[n];

    printf("\nEnter the elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter required value : ");
    scanf("%d",&x);

    max=0;

    for(i=1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j]) > max)
                max=a[i]+a[j];
        }

    }

    printf("Max is %d",max);
    /*

    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }

    printf("Maximum is %d and Minimum is %d\n",max,min);
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
            index1=i;
        if(a[i]==min)
            index2=i;
    }

    printf("\n\nThe difference is %d",abs(index1-index2));

    */
    return 0;
}

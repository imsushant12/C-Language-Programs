#include<stdio.h>
#include<stdlib.h>

int findgreatest(int a[],int i,int n)
{
    int max=a[i+1],j;
    for(j=i+2;j<n;j++)
    {
        if(max<a[j])
            max=a[j];
    }
    return max;
}

void main()
{
    int i,n;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    int a[n];

    printf("\nEnter the elements\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        a[i]=findgreatest(a,i,n);

    a[n-1]=-1;

    printf("\n\nThe updated list is:\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int len,i,j,max=0;
    printf("Enter length of array");
    scanf("%d",&len);
    int a[len];
    for(i=0; i<len; i++)
        scanf("%d",&a[i]);
    max=a[0];

    for(i=0;i<len;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    
    for(i=0;i<len;i++)
    {
        for(j=1;j<len;j++)
        {
            if((a[i]+a[j]) == max)
                printf("%d %d\n",a[i],a[j]);
        }
    }

    printf("\n\nMaximum is %d\n\n",max);

}


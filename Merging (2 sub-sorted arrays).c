#include<stdio.h>
#include<stdlib.h>

void merging(int a[] , int b[] , int low , int mid , int high)
{
    int i,j,k;
    i = low;
    j = mid+1;
    k = low;

    while(i <= mid && j <= high)
    {
        if(a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    for( ; i <=mid ; i++)
        b[k++]=a[i];

    for( ; j <= high ; j++)
        b[k++]=a[j];
}


int main()
{
    int i,n,low,mid,high;                                              //(high=high/last index) and (low=low/first index)

    printf("\nEnter total number of elements of array : ");
    scanf("%d",&n);

    int a[n],b[n];

    printf("\nEnter elements of array :\n");
    for(i=0 ; i < n ; i++)
        scanf("%d" , &a[i]);

    printf("\nEnter starting-index of sub-sorted array : ");
    scanf("%d",&low);

    printf("\nEnter last-index of sub-sorted array : ");
    scanf("%d",&mid);

    high=n-1;

    merging(a , b , low , mid , high);

    printf("\n\nMerged array is : \n");
    for(i=0 ; i < n ; i++)
        printf("%d " , b[i]);

    return 0;
}

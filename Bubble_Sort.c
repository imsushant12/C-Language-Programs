#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int a[] , int n)
{
    for(int i=0 ; i < (n-1) ; i++)
    {
        //n-1-i because at each pass largest element will be at end so no need to compare in next loop
        for(int j=0 ; j < (n-1) ; j++)
        {
            if(a[j] > a[j+1])       //basic swap
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n,i;

    printf("Enter number of elements of array : ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements of array :\n");
    for(i=0 ; i<n ; i++)
        scanf("%d",&a[i]);

    bubble_sort(a,n);

    printf("\n\nSorted array is : ");
    for(i=0 ; i<n ; i++)
        printf("%d ",a[i]);

    return 0;
}


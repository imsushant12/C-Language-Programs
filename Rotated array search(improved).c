#include<stdio.h>
#include<stdlib.h>

int RoatatedBinarySearch(int a[] , int n , int item)
{
    int low = 0;
    int high= n-1;

    while(low <= high)
    {
        int mid = (low+high)/2;

        if(a[mid] == item)
            return mid;

        else if(a[mid] >= a[low])
        {
            if(item <= a[mid] && item >= a[low])
                high = mid-1;
            else
                low = mid+1;
        }

        else
        {
            if(item >= a[mid] && item <= a[high])
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}


int main()
{
    int n,i,item,index;

    printf("Enter size of array : ");
    scanf("%d" , &n);

    int a[n];

    printf("\nEnter elements of array:\n");
    for(i=0 ; i<n ; i++)
        scanf("%d" , &a[i]);

    printf("\nEnter the element you want to search : ");
    scanf("%d",&item);

    index = RoatatedBinarySearch(a , n , item);
    if(index == -1)
        printf("\nElement not found!\n");
    else
        printf("\nElement is found on index %d.\n",index);

    return 0;
}

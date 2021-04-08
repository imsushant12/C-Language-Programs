#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int a[] , int low , int high , int item)
{
    if (high < low)
        return -1;

    int mid = (low + high)/2;

    if (item == a[mid])
        return mid;

    if (item > a[mid])
        return BinarySearch(a , mid+1 , high , item);

    return BinarySearch(a , low , mid-1 , item);
}

int findPivot(int a[] , int low , int high)
{
    if (high < low)
        return -1;
    if (high == low)
        return low;

    int mid = (low+high) / 2;
    if (mid < high && a[mid] > a[mid+1])
        return mid;

    if (mid > low && a[mid] < a[mid-1])
        return (mid - 1);

    if (a[low] >= a[mid])
        return findPivot(a , low , mid-1);

    return findPivot(a , mid+1 , high);
}


int PivotBinarySearch(int a[] , int n , int item)
{
    int pivot = findPivot(a , 0 , n-1);

    if(pivot == -1)
        return(BinarySearch(a , 0 , n-1 , item));
    if(a[pivot] == item)
        return(pivot);
    if(a[pivot] <= item)
        return(BinarySearch(a , pivot+1 , n-1 , item));
    else
        return(BinarySearch(a , 0 , pivot-1 , item));
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

    index = PivotBinarySearch(a , n , item);
    if(index == -1)
        printf("\nElement not found!\n");
    else
        printf("\nElement is found on index %d.\n",index);

    return 0;
}

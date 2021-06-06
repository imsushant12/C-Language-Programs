#include<stdio.h>
#include<stdlib.h>

/*
//Brute Force Approach-
int Occurences(int a[] , int n , int item)
{
    int count=0;
    for(int i=0 ; i<n ;i++)
    {
        if(a[i] == item)
            count++;
    }
    return count;
}
*/

int firstOccurence(int a[] , int low , int high , int n , int item)
{
    if(low <= high)
    {
        int mid = (low + high)/2;

        if((mid == low && a[mid] == item) || (a[mid] == item && a[mid-1] < item))
            return mid;
        else if(a[mid] >= item)
            return firstOccurence(a , low , mid-1 , n , item);
        else
            return firstOccurence(a , mid+1 , high , n , item);
    }
    return -1;
}

int lastOccurence(int a[] , int low , int high , int n , int item)
{
    if(high >= low)
    {
        int mid = (low + high)/2;

        if((mid == high && a[mid] == item) || (a[mid] == item && a[mid+1] > item))
            return mid;
        else if(a[mid] <= item)
            return lastOccurence(a , mid+1 , high , n , item);
        else
            return lastOccurence(a , low , mid-1 , n , item);
    }
    return -1;
}

int main()
{
    int n,i,item,index,low,high;

    printf("Enter size of array : ");
    scanf("%d" , &n);

    int a[n];

    printf("\nEnter elements of array(sorted order) :\n");
    for(i=0 ; i<n ; i++)
        scanf("%d" , &a[i]);

    printf("\nEnter the element you want to search : ");
    scanf("%d",&item);

    low = 0 , high = (n-1);

    int first = firstOccurence(a , low , high , n , item);
    int last = lastOccurence(a , low , high , n , item);
    int result = (last - first) + 1;
    printf("\nTotal Occurences = %d\n",result);


    /*
    //Brute Force Approach
    int count = Occurences(a , n , item);
    printf("\nTotal Occurences = %d\n",count);
    */

    return 0;
}

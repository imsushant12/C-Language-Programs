#include<stdio.h>
#include<stdlib.h>

void merging(int a[] , int b[] , int c[] , int m , int n)
{
    int i,j,k;
    i=j=k=0;

    while(i<m && j<n)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    for( ; i < m ; i++)
        c[k++] = a[i];

    for( ; j < n ; j++)
        c[k++] = b[j];
}


int main()
{
    int i,n,m;

    printf("\nEnter number of elements of first array : ");
    scanf("%d",&m);

    int a[m];

    printf("\nEnter elements of first array :\n");
    for(i=0 ; i < m ; i++)
        scanf("%d" , &a[i]);

    printf("\nEnter number of elements of second array : ");
    scanf("%d",&n);

    int b[n];

    printf("\nEnter elements of  second array :\n");
    for(i=0 ; i < n ; i++)
        scanf("%d" , &b[i]);

    int c[m+n];

    merging(a , b , c , m , n);

    printf("\n\nMerged array is : \n");
    for(i=0 ; i < (m+n) ; i++)
        printf("%d " , c[i]);

    return 0;
}

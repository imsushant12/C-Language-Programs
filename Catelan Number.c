#include<stdio.h>

int catlan(int n)
{
    int result=0;

    if(n <= 1)
        return 1;

    for(int i=0 ; i<n ; i++)
        result += (catlan(i)*catlan(n-i-1));

    return result;
}

int main()
{
    int n;
    printf("\nEnter the number of digits : ");
    scanf("%d",&n);
    printf("\nRequired Catlan Number = %d\n.",catlan(n));

    return 0;
}

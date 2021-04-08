#include<stdio.h>
#include<stdlib.h>
#define N 20

int top=-1;
int stack[N];

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    top++;
    stack[top]=data;
}

void pop()
{
    if(isEmpty())
        printf("\n");
    else
        top--;
}

void main()
{
    int n,i,stock;
    printf("Enter number of days : ");
    scanf("%d",&n);

    int price[n],span[n];

    printf("\nEnter the price of each day ");
    for(i=0;i<n;i++)
        scanf("%d",&price[i]);

    printf("\nEnter the desired day : ");
    scanf("%d",&stock);

    n = sizeof(price) / sizeof(price[0]);
    i=0;

    push(i);

    for(i=1 ; i<n ; i++)
    {
        while(!isEmpty() && price[i] >= price[stack[top]] )
            pop();

        if(isEmpty())
            span[i]=i+1;

        else
            span[i]=i-stack[top];

        push(i);
    }
    printf("\n\nRequired number of days = %d \n\n\n\n",span[stock]);
}





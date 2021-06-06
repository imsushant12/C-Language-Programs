#include<stdio.h>
#include<stdlib.h>
#define N 20

int top=-1;
int capacity=N;
int stack[N];

int isEmpty()
{
    if(top==-1)
    {
        printf("\nStack is empty");
        return 1;
    }
    else
    {
        printf("\nStack is not empty.");
        return 0;
    }
}

int isFull()
{
    if(top==capacity-1)
    {
        printf("\nStack is full");
        return 1;
    }
    else
    {
        printf("\nStack is not full.");
        return 0;
    }
}

void push()
{
    if(isFull())
        printf("\n");
    else
    {
        int data;
        printf("\nEnter element to be inserted : ");
        scanf("%d",&data);
        top++;
        stack[top]=data;
    }
}

void pop()
{
    if(isEmpty())
        printf("\n");
    else
    {
        int data;
        data=stack[top];
        top--;
        printf("\n%d is deleted now.",data);
    }
}

void peek()
{
    if(isEmpty())
        printf("\nStack is empty.");
    else
        printf("\nTop element is %d.",stack[top]);

}

void traverse()
{
    if(isEmpty())
        printf("\n");
    else
    {
        int i;
        printf("\nElements of stack are : ");
        for(i=top ; i>=0 ;i--)
            printf("%d ",stack[i]);
    }
}

void reverse()
{
    if(isEmpty())
        printf("\n");
    else
    {
        int i;
        printf("\nElements of stack in reverse order : ");
        for(i=0 ; i<=top;i++)
            printf("%d ",stack[i]);
    }
}

main()
{
    int choice;
    while(1)
    {
        printf("\n1. Push or enter elements onto stack");
        printf("\n2. Pop or delete elements from stack");
        printf("\n3. To display elements of stack");
        printf("\n4. Peek or see the top element of stack");
        printf("\n5. To reverse the stack");
        printf("\n6. To check if the stack is empty?");
        printf("\n7. To check if the stack is full?");
        printf("\n8. EXIT");
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            peek();
            break;
        case 5:
            reverse();
            break;
        case 6:
            isEmpty();
            break;
        case 7:
            isFull();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("\nInvalid Choice ... \n");
        }
    }
}

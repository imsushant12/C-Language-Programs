#include<stdio.h>
#include<stdlib.h>

struct arraystack
{
    int top;
    int capacity;
    char *ptr;
};

struct arraystack* createstack()
{
    struct arraystack *stackblock;
    stackblock=malloc(sizeof(struct arraystack));
    stackblock->capacity=50;
    stackblock->top=-1;
    stackblock->ptr=malloc(sizeof(char)*stackblock->capacity);
    return(stackblock);
}

char stacktop(struct arraystack *stack)
{
    return stack->ptr[stack->top];
}


int isEmpty(struct arraystack *stack)
{
    if(stack->top == -1)
        return 1;
    else
        return 0;
}


int isFull(struct arraystack *stack)
{
    if(stack->top == stack->capacity-1)
        return 1;
    else
        return 0;
}


void push(struct arraystack *stack,char data)
{
    if(isFull(stack))
        printf("\nStack overflow!\n");
    else
    {
        stack->top++;
        stack->ptr[stack->top]=data;
    }
}


char pop(struct arraystack *stack)
{
    if(isEmpty(stack))
    {
        printf("\nStack underflow!\n");
        return -1;
    }
    else
    {
        char y;
        y=stack->ptr[stack->top];
        stack->top--;
        return y;
    }
}

int match(char a , char b)
{
    if(a=='{' && b=='}')
        return 1;
    else if(a=='(' && b==')')
        return 1;
    else if(a=='[' && b==']')
        return 1;
    else
        return 0;
}
int isBalance(char *c)
{
    struct arraystack *stack;
    stack=createstack();

    int i;
    char popped;

    for(i=0 ; c[i]!='\0' ; i++)                     //runs loop until array ends
    {
        if(c[i]=='(' || c[i]=='{' || c[i]=='[')
            push(stack,c[i]);
        else if(c[i]==')' || c[i]=='}' || c[i]==']')
        {
            if(isEmpty(stack))
                return 0;
            popped=pop(stack);
            if(!match(popped,c[i]))
                return 0;
        }
    }
    if(isEmpty(stack))
        return 1;
    else
        return 0;
}

void main()
{
    int result;
    char *c[50];
    gets(c);
    if(isBalance(c))
        printf("Balanced\n");
    else
        printf("Imbalanced");
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
};

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
    stack->top++;
    stack->ptr[stack->top]=data;
}

char pop(struct arraystack *stack)
{
    char item=stack->ptr[stack->top];
    stack->top--;
    return item;
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/' || x=='%')
        return 1;                                           //returning 1 if it is not an operand
    else
        return 0;                                           //returning 0 if it is not an operator or it is an operand
}

int precedence(char x)
{
    if(x=='+' || x=='-')
        return 1;                                           //arranging operators according to their precedence
    else if(x=='*' || x=='/' || x=='%')
        return 2;
    else
        return 0;
}

char * conversion(char *infix)
{
    struct arraystack *stack;
    stack=createstack();

    int i=0,j=0;

    char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));

    while(infix[i] != '\0')
    {
        if(!isOperand(infix[i]))                              //checking if the char is operand or not
        {
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else
        {
            if(precedence(infix[i]) > precedence(stacktop(stack)))
            {
                push(stack,infix[i]);
                i++;
            }
            else
            {
                postfix[j]=pop(stack);
                j++;
            }
        }
    }
    while(!isEmpty(stack))
    {
        postfix[j]=pop(stack);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}

void main()
{
    int cap;
    char *infix[50];
    printf("\nEnter your expression : ");
    gets(infix);
    printf("\nPostfix is %s \n\n",conversion(infix));
}



























/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct arraystack
{
    int top;
    int capacity;
    char *ptr;
};

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
    stack->top++;
    stack->ptr[stack->top]=data;
}

char pop(struct arraystack *stack)
{
    char item=stack->ptr[stack->top];
    stack->top--;
    return item;
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/' || x=='%')
        return 1;                                           //returning 0 if it is not an operand
    else
        return 0;                                           //returning 1 if it is not an operator or it is an operand
}

int precedence(char x)
{
    if(x=='+' || x=='-')
        return 1;                                           //arranging operators according to their precedence
    else if(x=='*' || x=='/' || x=='%')
        return 2;
    else
        return 0;
}

char * conversion(char *infix)
{
    struct arraystack *s=(struct arraystack*)malloc(sizeof(struct arraystack));
    s->top=-1;
    s->capacity=50;
    s->ptr=(char *)malloc(s->capacity*sizeof(char));

    int i=0,j=0;

    char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));
    while(infix[i] != '\0')
    {
        if(!isOperand(infix[i]))                              //checking if the char is operand or not
        {
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else
        {
            if(precedence(infix[i]) > precedence(stacktop(s)))
            {
                push(s,infix[i]);
                i++;
            }
            else
            {
                postfix[j]=pop(s);
                j++;
            }
        }
    }
    while(!isEmpty(s))
    {
        postfix[j]=pop(s);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}

void main()
{
    char *infix[50];
    gets(infix);
    printf("Postfix is %s ",conversion(infix));
}
*/

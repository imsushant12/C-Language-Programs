#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *start=NULL;                                                //star pointer to point linked list.In starting NULL is assigned

struct node* createnode()
{
    struct node *stacklist;
    stacklist=(struct node*)malloc(sizeof(struct node));
    return(stacklist);
};


void push()
{
    int data;
    struct node *stack;
    stack=createnode();
    printf("Enter data to be inserted\n");
    scanf("%d",&data);
    stack->info=data;
    stack->link=start;                                          //if start pointed to null i.e. no node was present then new node will get null inside it and it will be pointed by start now.9
    start=stack;
}

void pop()
{
    int item;
    struct node *temp;
    temp=start;
    if(temp == NULL)
        printf("Stack is empty\n");
    else
    {
        item=start->info;
        start=start->link;
        free(temp);
        printf("Successfully popped %d \n",item);
    }
}

void peek()
{
    if(start==NULL)
        printf("Stack is empty\n");
    else
        printf("Top element is %d \n",start->info);
}

void remove_stack()
{
    if(start == NULL)
        printf("Empty Stack\n");
    else
    {
        while(start != NULL)
            pop();
    }
}

void display()
{
    struct node *temp;
    temp=start;
    if(start == NULL)
        printf("Stack is empty\n");
    else
    {
        printf("\nElements are : ");
        while(temp != NULL)
        {
            printf("%d ",temp->info);
            temp=temp->link;
        }
    }
}

void reverse()
{
    struct node *t1,*t2,*temp;
    t1=t2=NULL;
    if(start==NULL)
        printf("Stack is empty\n");
    else
    {
        while(start!=NULL)
        {
            t2=start->link;
            start->link=t1;
            t1=start;
            start=t2;
        }
        start=t1;
        temp=start;
        printf("Reversed stack is : ");
        while(temp!=NULL)
        {
            printf("%d ",temp->info);
            temp=temp->link;
        }
    }
}


int main()
{
    int choice;
    while(1)
    {
        printf("\t\n1 To push\n");
        printf("\t2 To pop\n");
        printf("\t3 To peek/see top element of stack\n");
        printf("\t4 To display stack\n");
        printf("\t5 To remove the complete stack\n");
        printf("\t6 To reverse stack\n");
        printf("\t7 To exit\n");
        printf("\nEnter Choice : ");
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
                peek();
                break;
        case 4:
                display();
                break;
        case 5:
                remove_stack();
                break;
        case 6:
                reverse();
                break;
        case 7:
                exit(1);
                break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}

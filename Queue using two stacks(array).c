#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};

struct queue
{
    struct node *stack1;
    struct node *stack2;
};

void enqueue(struct queue *q, int data)
{
    push(&q->stack1,data);          //pushing data into stack 1
}

void dequeue(struct queue *q)
{
    int data,del;

    if (q->stack1 == NULL && q->stack2 == NULL)
    {
        printf("\nQueue is empty.\n");
        return;
    }

    if (q->stack2 == NULL)
    {
        while(q->stack1 != NULL)
        {
            data = pop(&q->stack1);
            push(&q->stack2, data);
        }
    }

    del = pop(&q->stack2);
    printf("\n%d is deleted from queue.\n",del);
}

void push(struct node** stack, int data)
{
    struct node* newnode;
    newnode = (struct node*) malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("\nStack overflow \n");
        return;
    }

    newnode->info = data;
    newnode->link = (*stack);
    (*stack) = newnode;
}

int pop(struct node** stack)
{
    int data;
    struct node *temp;

    if (*stack == NULL)
    {
        printf("\nStack underflow \n");
        return;
    }

    else
    {
        temp = *stack;
        data = temp->info;
        *stack = temp->link;
        free(temp);
        return data;
    }
}

void display(struct node *stack1 , struct node *stack2)
{
    while (stack1 != NULL)
    {
        printf("\nData = %d ", stack1->info);
        stack1 = stack1->link;
    }

    while (stack2 != NULL)
    {
        printf("\nData = %d", stack2->info);
        stack2 = stack2->link;
    }
}

void main()
{
    struct queue *q;
    q = (struct queue*)malloc(sizeof(struct queue));

    int choice,data;

    q->stack1 = NULL;
    q->stack2 = NULL;

    while(1)
    {
        printf("\n1.Add Data\n2.Delete Data\n3.Display the elements\n4.Exit\nEnter your choice : ");
        scanf("%d" , &choice);
        switch(choice)
        {
        case 1 :
            printf("\nEnter the element to be added to queue : ");
            scanf("%d" , &data);
            enqueue(q , data);
            break;
        case 2 :
            dequeue(q);
            break;
        case 3 :
            display(q->stack1, q->stack2);
            break;
        case 4 :
            exit(1);
            break;
        default :
            printf("\nINVALID CHOICE...\n");
            break;
        }
    }
}

/*

Sample Input-Output:

*/

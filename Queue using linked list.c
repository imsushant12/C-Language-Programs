#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;

struct node* createnode()
{
    struct node *queue;
    queue=(struct node*)malloc(sizeof(struct node));
    return(queue);
};

void enqueue()
{
    int data;
    struct node *queue;
    queue=createnode();

    printf("Enter data to be inserted\n");
    scanf("%d",&data);

    queue->info=data;
    queue->link=NULL;

    if(front==0)
        front=rear=queue;

    else
    {
        rear->link=queue;       //in case of first node, it can be said as queue->link
        rear=queue;
    }
}

void display()
{
    struct node *temp;
    temp=front;
    while(temp != NULL)
    {
        printf("Data = %d\n",temp->info);
        temp=temp->link;
    }
}

void dequeue()
{
    if(front==0 && rear==0)
        printf("Queue is empty.\n");
    else
    {
        int data;
        struct node *temp;
        temp=front;
        data=front->info;
        front=front->link;
        printf("Successfully deleted %d from queue.\n",data);
        free(temp);
    }
}

void remove_queue()
{
    if(front==0 && rear==0)
        printf("\nQueue is empty.\n");
    else
    {
        while(rear != NULL)
            dequeue();
    }

}

void peek()
{
    if(front==0 && rear==0)
        printf("\nQueue is empty.\n");
    else
    {
        printf("\n%d is front-most element of queue.\n",rear->info);
    }
}


void main()
{
    struct node *queue;
    queue=createnode();
    int choice;
    while(1)
    {
        printf("\nEnter Choice :\n");
        printf("\t1 To enter data or en-Queue\n");
        printf("\t2 To delete data or de-Queue\n");
        printf("\t3 To peek/see top element of queue\n");
        printf("\t4 To display queue\n");
        printf("\t5 To remove the complete queue\n");
        printf("\t6 To exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
                enqueue();
                break;
        case 2:
                dequeue();
                break;
        case 3:
                peek();
                break;
        case 4:
                display();
                break;
        case 5:
                remove_queue();
                break;
        case 6:
                exit(1);
                break;
        default:
            printf("Incorrect Choice\n");
        }
    }
}

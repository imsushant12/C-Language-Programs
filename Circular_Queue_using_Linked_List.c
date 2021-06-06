#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
struct node *front=NULL;
struct node *rear=NULL;

struct node* createnode()
{
    struct node *queue;
    queue=(struct node*)malloc(sizeof(struct node));
    return queue;
};

void enqueue(struct node *queue)
{
    int data;
    queue=createnode();
    printf("Enter data to be inserted\n");
    scanf("%d",&data);
    queue->info=data;
    queue->link=NULL;
    if(rear == NULL)
    {
        front=queue;
        rear=queue;
        queue->link=queue;
    }
    else
    {
        rear->link=queue;
        rear=queue;
        queue->link=front;
    }
}

void dequeue()
{
    int data;
    struct node *temp;
    temp=front;
    if(front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
    }
    else if(front==rear)
    {
        data=front->info;
        front = rear =NULL;
        free(temp);
        printf("%d is deleted successfully\n",data);
    }
    else
    {
        data=front->info;
        front=front->link;
        rear->link=front;
        printf("%d is deleted successfully\n",data);
        free(temp);
    }
}

void peek(struct node *queue)
{
    if(front == NULL && rear == NULL)
        printf("Queue is empty\n");
    else
    {
        printf("%d is the first element of queue\n",rear->info);
    }
}

void display(struct node *queue)
{
    struct node *temp;
    temp=front;
    printf("Queue is : ");
    while(temp->link != front)
    {
        printf("%d ",temp->info);
        temp=temp->link;
    }
    printf("%d ",temp->info);
}

main()
{
    struct node *queue;
    int choice;
    while(1)
    {
        printf("\nEnter Choice :\n");
        printf("\t1 To enter data i.e. enQueue\n");
        printf("\t2 To delete data i.e. deQueue\n");
        printf("\t3 To view latest element or peek\n");
        printf("\t4 To view the queue\n");
        printf("\t5 To exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
                enqueue(queue);
                break;
        case 2:
                dequeue(queue);
                break;
        case 3:
                peek(queue);
                break;
        case 4:
                display(queue);
                break;
        case 5:
                exit(1);
                break;
        default:
            printf("Incorrect Choice\n");
        }
    }
}

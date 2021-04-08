#include<stdio.h>
#include<stdlib.h>
struct node
{
    int front,rear;
    int capacity;
    int *ptr;
};

struct node* createqueue(int cap)
{
    struct node *queue;
    queue=(struct node*)malloc(sizeof(struct node));
    queue->front=0;
    queue->rear=0;
    queue->capacity=cap;
    queue->ptr=malloc(sizeof(int)*queue->capacity);
    return(queue);
}

int isEmpty(struct node *queue)
{
    if(queue->rear == queue->front)
        return 1;
    return 0;
}

int isFull(struct node *queue)
{
    if((queue->rear+1) % queue->capacity == queue->front)
        return 1;
    return 0;
}

void enQueue(struct node *queue)
{
    if(isFull(queue))
        printf("\nQueue is full.\n");
    else
    {
        int data;
        printf("\nEnter data t be inserted : ");
        scanf("%d",&data);
        queue->rear=(queue->rear+1) % queue->capacity;
        queue->ptr[queue->rear]=data;
    }
}

void deQueue(struct node *queue)
{
    if(isEmpty(queue))
        printf("\nQueue is empty.\n");
    else
    {
        int data;
        queue->front=(queue->front+1) % queue->capacity;
        data=queue->ptr[queue->front];
        printf("\n%d is deleted from queue.\n",data);
    }
}

void display(struct node *queue)
{
    int i;
    if(isEmpty(queue))
        printf("\nQueue is empty.\n");
    else
    {
        printf("\nElements in Circular Queue are: \n");
        for(i = queue->front+1 ; i != queue->rear ; i = (i+1) % queue->capacity)      //important
            printf("Data = %d\n",queue->ptr[i]);
        printf("Data = %d\n",queue->ptr[queue->rear]);          // because loop does not printed the last element pointed by rear.
    }

}

void main()
{
    int cap,choice;
    struct node *queue;
    printf("Enter capacity of the array : ");
    scanf("%d",&cap);
    queue=createqueue(cap);
    while(1)
    {
        printf("\t1 To enter data i.e. en-Queue\n");
        printf("\t2 To delete data i.e. de-Queue\n");
        printf("\t3 To check the queue is empty?\n");
        printf("\t4 To check the queue is full?\n");
        printf("\t5 To view the queue\n");
        printf("\t6 To exit.\n");
        printf("\nEnter Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
                enQueue(queue);
                break;
        case 2:
                deQueue(queue);
                break;
        case 3:
                if(isEmpty(queue))
                    printf("\nQueue is empty.\n");
                else
                    printf("\nQueue is not empty.\n");
                break;
        case 4:
                if(isFull(queue))
                     printf("\nQueue is full.\n");
                else
                    printf("\nQueue is not full.\n");
                break;
        case 5:
                display(queue);
                break;
        case 6:
                exit(1);
                break;
        default:
            printf("\nIncorrect Choice...\n");
        }
    }
}

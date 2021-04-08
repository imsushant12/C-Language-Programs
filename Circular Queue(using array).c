#include<stdio.h>
#include<stdlib.h>
struct arrayqueue
{
    int front,rear;
    int capacity;
    int *ptr;
};

struct arrayqueue* createqueue(int cap)
{
    struct arrayqueue *queue;
    queue=malloc(sizeof(struct arrayqueue));
    if(!queue)
    {
        printf("Creation of queue failed\n");
        return (NULL);
    }
    queue->capacity=cap;
    queue->front=-1;
    queue->rear=-1;
    queue->ptr=malloc(sizeof(struct arrayqueue)*queue->capacity);

    if(!queue->ptr)
    {
        printf("Array cannot be formed\n");
        return (NULL);
    }
    return (queue);
};

int isempty(struct arrayqueue *queue)   //when nothing to delete. i.e. front ==-1
{
    if(queue->front == -1)
    {
        printf("Queue is empty\n");
        return 1;
    }
    else
    {
        printf("Queue is not empty\n");
        return 0;
    }
}

int isfull(struct arrayqueue *queue)
{
    if((queue->rear+1)%queue->capacity == queue->front)  //IMPORTANT
    {
        printf("Queue is full\n");
        return 1;
    }
    else
    {
        printf("Queue is not full\n");
        return 0;
    }
}

void enqueue(struct arrayqueue *queue)
{
    int data;
    if(isfull(queue));

    else
    {
        printf("Enter data to be inserted in queue\n");
        scanf("%d",&data);
        queue->rear=(queue->rear+1)%queue->capacity;
        queue->ptr[queue->rear]=data;

        if(queue->front == -1)
        {
            queue->front=0;
            queue->rear=0;
        }
    }
}

void dequeue(struct arrayqueue *queue)
{
    int data;
    if(isempty(queue));

    else
    {
        data=queue->ptr[queue->front];
        if(queue->front == queue->rear)
        {
            queue->front=-1;
            queue->rear=-1;
        }
        else
        {
            queue->front=(queue->front+1)%queue->capacity;
            printf("Successfully deleted %d from queue\n",data);
        }
    }
}

void deletequeue(struct arrayqueue *queue)
{
    if(queue)
    {
        if(queue->ptr)
        {
            free(queue->ptr);
        }
        free(queue);
    }
}

void display(struct arrayqueue *queue)   // VERY IMPORTANT
{
    int i=queue->front;
    if(queue->front==-1 && queue->rear==-1)
        printf("Queue is empty\n");
    else
    {
        printf("Queue is : ");
        while(i!=queue->rear)
        {
            printf("%d ",queue->ptr[i]);
            i=(i+1)%queue->capacity;
        }
    printf("%d ",queue->ptr[queue->rear]);
    }
}

main()
{
    int cap;
    printf("Enter capacity of queue\n");
    scanf("%d",&cap);
    struct arrayqueue *queue;
    queue=createqueue(cap);
    int choice;
    while(1)
    {
        printf("\nEnter Choice :\n");
        printf("\t1 To enter data i.e. enQueue\n");
        printf("\t2 To delete data i.e. deQueue\n");
        printf("\t3 To check the queue is empty?\n");
        printf("\t4 To check the queue is full?\n");
        printf("\t5 To view the queue\n");
        printf("\t6 To exit\n");
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
                isempty(queue);
                break;
        case 4:
                isfull(queue);
                break;
        case 5:
               display(queue);
               break;
        case 6:
                exit(1);
                break;
        default:
            printf("Incorrect Choice\n");
        }
    }
}


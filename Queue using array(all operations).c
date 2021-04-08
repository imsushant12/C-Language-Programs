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

    queue->capacity=cap;
    queue->front=-1;
    queue->rear=-1;

    queue->ptr=malloc(sizeof(struct arrayqueue)*(queue->capacity));

    return(queue);
};

int isempty(struct arrayqueue *queue)   //when nothing to delete. i.e. front ==-1
{
    if(queue->front == queue->rear)
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
    if(queue->rear == (queue->capacity) - 1)
    {
        printf("Queue is full\n");
        printf("Cannot enter more items.\n");
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

        queue->rear++;
        queue->ptr[queue->rear]=data;

        if(queue->front == -1)                  //will take care of first insertion
            queue->front=0;
    }
}

void dequeue(struct arrayqueue *queue)
{
    int data;

    if(isempty(queue));

    else
    {
        data=queue->ptr[queue->front];
        queue->front++;
        printf("Successfully deleted %d from queue\n",data);
    }
}

void deletequeue(struct arrayqueue *queue)
{
    if(queue)
    {
        if(queue->ptr)
        {
            printf("\nQueue is deleted\n");
            free(queue->ptr);
        }
        free(queue);
    }
}

void display(struct arrayqueue *queue)
{
    if(isempty(queue));
    else
    {
        for(int i=queue->front ; i <= queue->rear ; i++)
        {
            printf("Data = %d\n",queue->ptr[i]);
        }
    }
}

void reverse(struct arrayqueue *queue)
{
    if(isempty(queue));
    else
    {
        for(int i = queue->rear ; i >= queue->front ; i--)
                printf("Data in reverse = %d\n",queue->ptr[i]);
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
        printf("\t1 To enter data i.e. en-Queue\n");
        printf("\t2 To delete data i.e. de-Queue\n");
        printf("\t3 To check the queue is empty?\n");
        printf("\t4 To check the queue is full?\n");
        printf("\t5 To view the queue\n");
        printf("\t6 To reverse the queue\n");
        printf("\t7 To delete complete queue\n");
        printf("\t8 To exit\n");
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
                reverse(queue);
                break;
        case 7:
                deletequeue(queue);
                break;
        case 8:
                exit(1);
                break;
        default:
            printf("Incorrect Choice\n");
        }
    }
}

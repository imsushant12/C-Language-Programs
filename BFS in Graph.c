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

void enqueue(int data)
{
    struct node *queue;
    queue=createnode();
    if(queue==NULL)
        printf("Queue if full.\n");
    else
    {
        queue->info=data;
        queue->link=NULL;
        if(front==NULL)
            front=rear=queue;
        else
        {
            rear->link=queue;    //in case of first node, it can be said as queue->link
            rear=queue;
        }
    }
}

int dequeue()
{
    int data=-1;
    struct node *queue;
    if(front==NULL)
        printf("Queue is empty.\n");
    else
    {
        data=front->info;
        queue=front;
        front=front->link;
        free(queue);
    }
    return data;
}

int isEmpty()
{
    return (front==NULL);
}

void BFS(int G[][7],int start,int n)
{
    int i=start,j;
    int visited[7]={0};

    printf("%d ",i);
    visited[i]=1;           //changing the status from ready status to waiting status
    enqueue(i);

    while(!isEmpty())
    {
        i=dequeue();
        for(j=1;j<n;j++)
        {
            if(G[i][j]==1 && visited[j]==0)
            {
                printf("%d ",j);
                visited[j]=1;
                enqueue(j);
            }
        }
    }

}



void main()
{
    int G[7][7]={{0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}};

    BFS(G,4,7);           //1=first vertex we can use any vertex we can
}                         //7 is the number of vertex

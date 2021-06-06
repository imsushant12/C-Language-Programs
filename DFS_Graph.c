#include<stdio.h>
#include<stdlib.h>
#define N 20
int top=-1;
int capacity=N;
int stack[N];

int isEmpty()
{
  if(top == -1)
    return 1;
  else
    return 0;
}

void push(int data)
{
    top++;
    stack[top]=data;
}

int pop()
{
    int data=-1;
    data=stack[top];
    top--;
    return data;
}

void DFS(int G[][7],int start,int n)
{
    int i=start,j;
    int visited[7]={0};
    push(i);

    while(!isEmpty())
    {
        i=pop();
        if(visited[i]==0)
        {
            printf("%d ",i);
            visited[i]=1;
        }
        for(j=n-1 ; j>0 ; j--)
        {
            if(G[i][j]==1 && visited[j]==0)
            push(j);
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
    DFS(G,1,7);           //1=first vertex we can use any vertex we can
}                         //7 is the number of vertex

#include<stdio.h>
#include<stdlib.h>
#define N 5
struct node
{
    int arr[N];
    struct node *ptr;
    int capacity;       //it is the capacity of number of elements.
};                   //if number of elements i.e. capacity==size i.e. N then we cannot insert any element.
struct node *ul1;

void display(struct node *ull)
{
    int i;
    while (ull != NULL)
    {
        for (i=0; i< ull->capacity; i++)
            printf("%d ",ull->arr[i]);
        ull=ull->ptr;
    }
}

int main()
{
    int threshold;
    threshold=((N/2)+1);
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    struct node* fourth = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head->capacity= threshold;

    head->arr[0] = 1;
    head->arr[1] = 2;
    head->arr[2] = 3;

    head->ptr = second;
    second->capacity = threshold;

    second->arr[0] = 4;
    second->arr[1] = 5;
    second->arr[2] = 6;

    second->ptr = third;
    third->capacity = threshold;

    third->arr[0] = 7;
    third->arr[1] = 8;
    third->arr[2] = 9;

    third->ptr = fourth;
    fourth->capacity=threshold;

    fourth->arr[0] = 10;
    fourth->arr[1] = 11;
    fourth->arr[2] = 12;

    fourth->ptr=NULL;

    display(head);

    return 0;
}

//by Sushant Gaurav

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *last = NULL;

void viewList()
{
    if(last == NULL)
        printf("\nList is empty\n");
    else
    {
        struct node *temp;
        temp = last->next;
        do
        {
            printf("\nData = %d",temp->info);
            temp = temp->next;
        }while(temp!=last->next);
    }
}

void addatbeg()
{
    int data;
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted : \n");
    scanf("%d",&data);
    if(last == NULL)
    {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
    else
    {
        temp->info=data;
        temp->next = last->next;
        last->next = temp;
    }
}

void addatlast()
{
    int data;
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted : \n");
    scanf("%d",&data);
    if(last == NULL)
    {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
    else
    {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void insertafter()
{
    int data,value;
    struct node *temp,*n;
    printf("\nEnter number after which you want to enter number : \n");
    scanf("%d",&value);
    temp = last->next;
    do
    {
        if(temp->info == value)
        {
            n = (struct node*)malloc(sizeof(struct node));
            printf("\nEnter data to be inserted : \n");
            scanf("%d",&data);
            n->info = data;
            n->next = temp->next;
            temp->next = n;
            if(temp == last)
                last = n;
            break;
        }
        else
            break;
        temp = temp->next;
    }while(temp != last->next);
}

void deletefirst()
{
    struct node *temp;
    if(last == NULL)
        printf("\nList is empty.\n");
    else
    {
        temp = last->next;
        last->next = temp->next;
        free(temp);
    }
}

void deletelast()
{
    struct node *temp;
    if(last == NULL)
        printf("\nList is empty.\n");

    temp = last->next;
    while(temp->next != last)
        temp=temp->next;

    temp->next = last->next;
    last = temp;
}

void deleteafter()
{
    int pos,i=1;
    struct node *temp,*position;
    temp = last->next;
    if(last == NULL)
        printf("\nList is empty.\n");
    else
    {
        printf("\nEnter index : ");
        scanf("%d",&pos);
        while(i <= pos-1)
        {
            temp = temp->next;
            i++;
        }
        position = temp->next;
        temp->next = position->next;

        free(position);
    }
}

void create()
{
    int n,i,data;
    printf("\nEnter number of elements to be entered : \n");
    scanf("%d",&n);
    addatbeg();
    for(i=2 ; i <= n ; i++)
    {
        addatlast();
    }
}


int main()
{
    int choice;
    while(1)
    {
        printf("\n1. To view list\n");
        printf("2. For insertion at starting\n");
        printf("3. For insertion at end\n");
        printf("4. For insertion at any position\n");
        printf("5. For deletion at starting\n");
        printf("6. For deletion at end\n");
        printf("7. For deletion at any position\n");
        printf("8. For creation of list\n");
        printf("9. To exit\n");
        printf("Enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
                viewList();
                break;
        case 2:
                addatbeg();
                break;
        case 3:
                addatlast();
                break;
        case 4:
                insertafter();
                break;
        case 5:
               deletefirst();
               break;

        case 6:
               deletelast();
               break;

        case 7:
               deleteafter();
               break;

        case 8:
                create();
                break;
        case 9:
                exit(1);
                break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}

/*

To convert circular linked list in singly linked list:
temp=last;
last=last->link;
start=last;
temp->link=NULL;

*/

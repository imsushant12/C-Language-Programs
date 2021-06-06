 #include<stdio.h>
struct node
{
    int info;
    struct node *prev,*next;
};

struct node *start=NULL;

void insertstart()
{
    int data;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&data);
    temp->info=data;
    temp->prev=NULL;
    temp->next=start;
    start=temp;
}


void insertlast()
{
    int data;
    struct node *temp,*trav;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;
    trav=start;
    if(start==NULL)
    {
        temp->prev=NULL;
        start=temp;
    }
    else
    {
        while(trav->next != NULL)
            trav=trav->next;
        temp->prev=trav;
        trav->next=temp;
    }
}


void insertafter(struct node *ptr)
{
    int data;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("\nList is empty\n");
    else
    {
         printf("\nEnter data : ");
         scanf("%d",&data);
         temp->info=data;
         temp->prev=ptr;
         temp->next=ptr->next;
         ptr->next->prev=temp;
         ptr->next=temp;
    }
}


struct node* find ()  //**start and start=*s
{
    int data;
    struct node *temp;
    if(start==NULL)
        return NULL;
    else
    {
        printf("\nEnter data after which you want insertion : ");
        scanf("%d",&data);
        temp=start;
        while(temp!=NULL)
        {
            if(temp->info==data)
                return temp;
            else
                temp=temp->next;
        }
        return NULL;
    }
}

void insertat()
{
    int data,pos,i=1;
    struct node *temp,*newnode;
    newnode=malloc(sizeof(struct node));
    printf("\nEnter position : ");
    scanf("%d",&pos);
    printf("\nEnter data : ");
    scanf("%d",&data);
    newnode->info=data;
    temp=start;
    if(start==NULL)
    {
        start=newnode;
        newnode->prev=NULL;
        newnode->next=NULL;
    }
    else
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        temp->next->prev=newnode;
    }

}


void deletefirst()
{
    struct node *temp;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
        temp=start;
        start=start->next;
        start->prev=NULL;
        free(temp);
    }
}


void deletelast()
{
    struct node *temp;
    if(start==NULL)
        printf("\nList is empty\n");
    temp=start;
    while(temp->next != NULL)
        temp=temp->next;
    if(start->next==NULL)
        start=NULL;
    else
    {
        temp->prev->next=NULL;
        free(temp);
    }
}


void deleteafter()
{
    int pos,i=1;
    struct node *temp,*position;
    temp=start;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
        printf("\nEnter index : ");
        scanf("%d",&pos);
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        position=temp->next;
        position->next->prev=temp;
        temp->next=position->next;

        free(position);
    }
}


void viewlist()
{
    if(start==NULL)
        printf("\nList is empty\n");
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("Data = %d\n",temp->info);
        temp=temp->next;
    }
}


void main()
{
    int choice;
    while(1)
    {
        printf("\n\t1 To see list\n");
        printf("\t2 For insertion at starting\n");
        printf("\t3 For insertion at end\n");
        printf("\t4 For insertion at any position by providing data\n");
        printf("\t5 For insertion at any position by providing index\n");
        printf("\t6 For deletion of first element\n");
        printf("\t7 For deletion of last element\n");
        printf("\t8 For deletion of element at any position\n");
        printf("\t9 To exit.\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
                viewlist();
                break;
        case 2:
                insertstart();
                break;
        case 3:
                insertlast();
                break;
        case 4:
                insertafter(find());
                break;
        case 5:
                insertat();
                break;
        case 6:
               deletefirst();
               break;
        case 7:
                deletelast();
                break;
        case 8:
                deleteafter();
                break;
        case 9:
                exit(1);
                break;
        default:
            printf("Incorrect Choice\n");
        }
    }
}

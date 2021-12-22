#include<stdio.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start=NULL;

void traverse()
{
    struct node *temp;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            printf("Data = %d\n",temp->info);
            temp=temp->link;
        }
    }
}

void insetatfirst()
{
    int data;
    struct node *temp;
    temp=malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d",&data);
    temp->info=data;
    temp->link=start;  //pointer of temp will be assigned to start
    start=temp;
}

void insertatend()
{
    int data;
    struct node *temp,*head;
    temp=malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d",&data);
    temp->link=0;
    temp->info=data;
    head=start;
    while(head->link!=NULL)
    {
        head=head->link;
    }
    head->link=temp;
}

void insertposition()
{
    struct node *temp,*newnode;
    int pos,data,i=1;
    newnode=malloc(sizeof(struct node));
    printf("\nEnter position and data :");
    scanf("%d %d",&pos,&data);
    temp=start;
    newnode->info=data;
    newnode->link=0;
    while(i<pos-1)
    {
        temp=temp->link;
        i++;
    }
    newnode->link=temp->link;
    temp->link=newnode;
}

void deletefirst()
{
    struct node *temp;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
    temp=start;
    start=start->link;
    free(temp);
    }
}

void deleteend()
{
    struct node *temp,*prevnode;
    if(start==NULL)
        printf("\nList is Empty\n");
    else
    {
        temp=start;
        while(temp->link!=0)
        {
            prevnode=temp;
            temp=temp->link;
        }
        free(temp);
        prevnode->link=0;
    }
}

void deleteposition()
{
    struct node *temp,*position;
    int i=1,pos;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
        printf("\nEnter index : ");
        scanf("%d",&pos);
        position=malloc(sizeof(struct node));
        temp=start;
        while(i<pos-1)
        {
            temp=temp->link;
            i++;
        }
        position=temp->link;
        temp->link=position->link;
        free(position);
    }
}

void maximum()
{
    int a[10];
    int i;
    struct node *temp;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
    temp=start;
    int max=temp->info;
    while(temp!=NULL)
    {
        if(max<temp->info)
            max=temp->info;
        temp=temp->link;
    }
    printf("\nMaximum number is : %d ",max);
    }
}

void mean()
{
    int a[10];
    int i;
    struct node *temp;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
    temp=start;
    int sum=0,count=0;
    float m;
    while(temp!=NULL)
    {
        sum=sum+temp->info;
        temp=temp->link;
        count++;
    }
    m=sum/count;
    printf("\nMean id %f ",m);
    }
}

void swap()
{
    struct node *temp,*position;
    int i=0,p,z;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
        printf("\nEnter index  ");
        scanf("%d\n",&p);
        temp=start;
        while(i<p)
        {
            temp=temp->link;
            i++;
        }
        position=temp->link;
        z=temp->info;
        temp->info=position->info;
        position->info=z;
    }
}

void sort()
{
        struct node *current = start, *index = NULL;
        int temp;
        if(start == NULL)
        {
            return;
        }
        else
        {
            while(current != NULL)
            {
                index = current->link;
                while(index != NULL)
                {
                    if(current->info > index->info)
                    {
                        temp = current->info;
                        current->info = index->info;
                        index->info = temp;
                    }
                    index = index->link;
                }
                current = current->link;
            }
        }
}

void concatenate(struct node *start,struct node *start2)  //will pass start pointer of both linked list
{
    if(start==NULL & start2==NULL)
        printf("\nEmpty linked list");
    else
    {
        struct node *temp=NULL;
        temp=start;
        while(temp->link!=NULL)
            temp=temp->link;
        temp->link=start2;
    }
}

void singletocircular()
{
    struct node *temp,*last;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
    temp=start;
    while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=start;
        last=temp;
    }
}
void reversell()
{
    struct node *t1,*t2,*temp;
    t1=t2=NULL;
    if(start==NULL)
        printf("List is empty\n");
    else
    {
        while(start!=NULL)
        {
            t2=start->link;
            start->link=t1;
            t1=start;
            start=t2;
        }
        start=t1;
        temp=start;
        printf("Reversed linked list is : ");
        while(temp!=NULL)
        {
            printf("%d ",temp->info);
            temp=temp->link;
        }
    }
}


int search(int data)
{
    struct node *temp;
    if(start==NULL)
        printf("\nList is empty\n");
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            if(temp->info == data)
                return 1;
            temp=temp->link;
        }
    }
    return 0;
}


int main()
{
    int choice,data;
    while(1)
    {

        printf("\n\t1  To see list\n");
        printf("\t2  For insertion at starting\n");
        printf("\t3  For insertion at end\n");
        printf("\t4  For insertion at any position\n");
        printf("\t5  For deletion of first element\n");
        printf("\t6  For deletion of last element\n");
        printf("\t7  For deletion of element at any position\n");
        printf("\t8  To find maximum among the elements\n");
        printf("\t9  To find mean of the elements\n");
        printf("\t10 To swap element\n");
        printf("\t11 To sort element\n");
        printf("\t12 To concatenate two strings,pass start address of both the linked list\n");
        printf("\t13 To covert singly linked list into circular list\n");
        printf("\t14 To reverse the linked list\n");
        printf("\t15 To search an element\n");
        printf("\t16 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
                traverse();
                break;
        case 2:
                insetatfirst();
                break;
        case 3:
                insertatend();
                break;
        case 4:
                insertposition();
                break;
        case 5:
               deletefirst();
               break;
        case 6:
                deleteend();
                break;
        case 7:
                deleteposition();
                break;
        case 8:
                maximum();
                break;
        case 9:
                mean();
                break;
        case 10:
                swap();
                break;
        case 11:
                sort();
                break;
        case 12:
                concatenate(NULL,NULL);
                break;
        case 13:
                singletocircular();
                break;
        case 14:
                reversell();
                break;
        case 15:
                printf("\nEnter element to search  : ");
                scanf("%d",&data);
                int ans = search(data);
                if(ans == 1)
                    printf("\nElement is found.");
                else
                    printf("\nElement is not found.");
                break;
        case 16:
                exit(1);
                break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}

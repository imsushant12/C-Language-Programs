#include<stdio.h>
#include<string.h>
struct node
{
    char s[10][10];
    struct node *link;
};
struct node *start=NULL;
main()
{
    int n,i,j;
    char t[10];
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter no of names : ");
    scanf("%d",&n);
    
    printf("\nEnter the names : ");
    for(i=0;i<n;i++)
    {
        scanf("%s",&temp->s[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(temp->s[i],temp->s[j])>0)
            {
                strcpy(t,temp->s[i]);
                strcpy(temp->s[i],temp->s[j]);
                strcpy(temp->s[j],t);
            }

        }
    }
    printf("\nSorted linked list is :\n");
     for(i=0;i<n;i++)
     {
         printf("\n%s",temp->s[i]);
     }
}

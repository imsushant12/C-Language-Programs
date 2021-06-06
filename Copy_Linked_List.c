#include<stdio.h>
struct node
{
    int s[10];
    struct node *link;
};
struct node2
{
    int t[10];
    struct node *link2;
};
main()
{
    int n,i;
    printf("Enter no elements\n");
    scanf("%d",&n);
    struct node *temp;
    struct node2 *temp2;
    temp=malloc(sizeof(struct node));
    temp2=malloc(sizeof(struct node2));
    printf("\nEnter elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp->s[i]);
    }

    for(i=0;i<n;i++)
    {
        temp2->t[i]=temp->s[i];
    }
    printf("\nCopied below : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",temp2->t[i]);
    }
}

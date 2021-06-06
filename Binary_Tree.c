//by Sushant Gaurav

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *left,*right;
};

struct node* create()
{
    int data;
    struct node *tree;
    tree=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted or type -1 for no insertion : ");
    scanf("%d",&data);

    if(data==-1)
        return 0;

    tree->info=data;

    printf("\nEnter left child of %d",data);
    tree->left=create();

    printf("\nEnter right child of %d",data);
    tree->right=create();

    return tree;
};

//-----------------------------------------------------------------------------------------------------------------------------------------------

void preorder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ",root->info);
        preorder(root->left);
        preorder(root->right);
    }
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

void inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->info);
        inorder(root->right);
    }
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

void postorder (struct node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->info);
    }
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

int FindMax(struct node *root)
{
    int rootvalue,max=0,left,right;
    if(root != NULL)
    {
        rootvalue = root->info;
        left = FindMax(root->left);
        right = FindMax(root->right);

        if(left > right)
            max = left;
        else
            max = right;
        if(rootvalue > max)
            max = rootvalue;
    }
    return max;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

int FindElement(struct node *root , int data)
{
    int temp;
    if(root != NULL)
    {
        if(data == root->info)
            return 1;
        else
        {
            temp = FindElement(root->left , data);
            if(temp == 1)
                return 1;
            else
                return(FindElement(root->right , data));
        }
    }
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

int sizeoftree(struct node *root)
{
    if(root == NULL)
        return 0;
    else
        return (sizeoftree(root->left) + sizeoftree(root->right) + 1);
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

void deletetree(struct node *root)
{
    if(root == NULL)
        return;

    deletetree(root->left);
    deletetree(root->right);
    free(root);
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

int height(struct node *root)
{
    int x,y;
    if(root != NULL)
    {
        x=height(root->left);
        y=height(root->right);

        if(x>y)
            return x+1;
        else
            return y+1;
    }
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

int leafnodes(struct node *root)
{
    int x,y;
    if(root)
    {
        x = leafnodes(root -> left);
        y = leafnodes(root -> right);

        if((root -> left == NULL) && (root -> right == NULL))
            return (x + y + 1);
        else
            return (x + y);
    }
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

int degreeone(struct node *root)
{
    int x,y;
    if(root)
    {
        x = degreeone(root -> left);
        y = degreeone(root -> right);

        if((root -> left == NULL && root -> right != NULL) || (root -> left != NULL && root -> right == NULL))
            return (x + y + 1);
        else
            return (x + y);
    }
    return 0;

    /*
    if condition can also be written as :
        if(root->left ! = NULL ^ root->right != NULL)                                               //important

    */
}

//-----------------------------------------------------------------------------------------------------------------------------------------------

int degreetwo(struct node *root)
{
    int x,y;
    if(root)
    {
        x = degreetwo(root -> left);
        y = degreetwo(root -> right);

        if((root -> left != NULL) && (root -> right != NULL))
            return (x + y + 1);
        else
            return (x + y);
    }
    return 0;
}



int main()
{
    int choice,data;
    struct node *root;
    while(1)
    {
        printf("\nEnter your choice");
        printf("\n1. for insertion");
        printf("\n2. for pre-order traversal");
        printf("\n3. for in-order traversal");
        printf("\n4. for post-order traversal");
        printf("\n5. to find maximum element");
        printf("\n6. to find an element");
        printf("\n7. to find size of the tree");
        printf("\n8. to delete the tree");
        printf("\n9. to calculate height of tree");
        printf("\n10. to calculate number of leaf node");
        printf("\n11. to calculate number of nodes of degree one");
        printf("\n12. to calculate number of nodes of degree two");
        printf("\n13. to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            root=create();
            break;

        case 2:
            printf("\n");
            preorder(root);
            break;

        case 3:
            printf("\n");
            inorder(root);
            break;

        case 4:
            printf("\n");
            postorder(root);
            break;

        case 5:
            printf("\nThe maximum element is %d \n",FindMax(root));
            break;

        case 6:
            printf("Enter the element you want to search : ");
            scanf("%d",&data);

            if(FindElement(root,data)==1)
                printf("\nElement is found\n");
            else
                printf("\nElement is not found\n");
            break;

        case 7:
            printf("\nSize of tree is : %d \n",sizeoftree(root));
            break;

        case 8:
            deletetree(root);
            printf("\nTree is deleted\n");
            root=NULL;
            break;

        case 9:
            printf("\nHeight of the tree is  %d ",height(root));
            break;

        case 10:
            printf("\nThe no of leaf nodes are :  %d\n",leafnodes(root));
            break;

        case 11:
            printf("\nThe no of one-degree nodes are :  %d\n",degreeone(root));
            break;

        case 12:
            printf("\nThe no of two-degree nodes are :  %d\n",degreetwo(root));
            break;

        case 13:
            exit(0);
            break;

        default:
            printf("\nInvalid Choice\n");

        }
    }

    return 0;
}

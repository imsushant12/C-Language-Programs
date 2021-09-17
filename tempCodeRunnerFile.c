#include <stdio.h>
#include <stdlib.h>

// The structure of node of a doubly linked list as described above.
struct doubly
{
    struct doubly *prev;
    int data;
    struct doubly *next;
};

void append(struct doubly **, int);
void display(struct doubly *);
void del(struct doubly **, int);

// User driven code of main() method for implementing linked list.
int main(void)
{

    // Start pointer to store the address of first node.
    struct doubly *start = NULL;
    int n, m;

    // The loop will continue running until the user itself terminates the program.
    do
    {
        printf("\n1. Append \n2. Display \n3. Delete \n4. Quit \n Enter Choice : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("\nEnter the element : ");
            scanf("%d", &m);
            append(&start, m);
            break;
        case 2:
            display(start);
            break;
        case 3:
            printf("\nEnter the element you want to delete : ");
            scanf("%d", &m);
            del(&start, m);
            break;
        case 4:
            exit(0);
        default:
            printf("\nPlease enter a valid choice.");
            break;
        }
    } while (1);
    return 0;
}

// Method to insert node into the linked list.
void append(struct doubly **ps, int x)
{
    struct doubly *temp, *p;

    // Creating a new node for insertion.
    p = (struct doubly *)malloc(sizeof(struct doubly));
    p->data = x;
    p->next = p->prev = NULL;

    // If the node to be inserted is the first node.
    if (*ps == NULL)
    {
        *ps = p;
        return;
    }
    //
    //// If there
    if ((*ps)->next == NULL)
    {
        (*ps)->next = p;
        p->prev = *ps;
        return;
    }

    // If it is not first not, we'll traverse to the last node
    // and then join the new node there.
    temp = *ps;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
}

void display(struct doubly *p)
{
    if (p == NULL)
    {
        printf("List is empty.");
        return;
    }
    printf("\nList is : ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

// Method to delete a node from doubly linked list.
void del(struct doubly **ps, int x)
{
    struct doubly *temp = *ps;

    // If the list is empty, return.
    if (temp == NULL)
    {
        printf("\nList is empty");
        return;
    }

    // If the list contain only one element
    if ((*ps)->next == NULL && (*ps)->data == x)
    {
        free(*ps);
        *ps = NULL;
        printf("\nNode Deleted.");
        return;
    }

    // If node contain more than one element.
    else
    {
        temp = *ps;
        if ((*ps)->data == x)
        {
            *ps = (*ps)->next;
            free(temp);
            printf("\nNode Deleted.");
            return;
        }
        while (temp->data != x && temp->next != NULL)
        {
            temp = temp->next;
        }
        if (temp->data == x)
        {
            if (temp->prev == NULL)
            {
                *ps = temp->next;
                (*ps)->prev = NULL;
                free(temp);
                return;
            }
            temp->prev->next = temp->next;
            if (temp->next != NULL)
                temp->next->prev = temp->prev;
            free(temp);
            printf("\nNode Deleted.");
        }
        else
        {
            printf("\nData not found in the list.");
        }
    }
}
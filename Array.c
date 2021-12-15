#include <stdio.h>
#include <stdlib.h>

int n;
int a[100];

void insert(int n)
{
    int i;
    printf("\nEnter the numbers : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void insertatstart(int data)
{
    int i;
    for (i = n; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = data;
    n = n + 1;
}

void insertat(int data, int pos)
{
    int i;
    for (i = n; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = data;
    n = n + 1;
}

void traverse()
{
    int i;
    printf("\nElements are : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void deletefirst()
{
    int i;
    if (n == 0)
        printf("\nArray is empty.\n");
    else
    {
        for (i = 0; i < n; i++)
            a[i] = a[i + 1];
        n = n - 1;
        printf("First element is deleted.\n");
    }
}

void deleteat(int pos)
{
    int i;
    if (n == 0)
        printf("\nArray is empty.\n");

    else if (pos > n)
        printf("\nGiven index is larger than number of elements in array.\n");

    else
    {
        for (i = pos; i < n; i++)
            a[i] = a[i + 1];
        n = n - 1;
        printf("\nElement at index = %d is deleted .\n", pos);
    }
}

void deletelast()
{
    if (n == 0)
        printf("\nArray is empty.\n");
    else
    {
        n = n - 1;
        printf("\nLast element is deleted.\n");
    }
}

void search(int item)
{
    int i, flag = 0;
    if (n == 0)
        printf("\nArray is empty\n");
    else
    {
        for (i = 0; i < n; i++)
        {
            if (item == a[i])
                flag = 1;
        }
        if (flag == 1)
            printf("\n%d is found in the array.\n", item);
        else
            printf("\n%d is not found in the array.\n", item);
    }
}

void sort()
{
    if (n == 0)
        printf("\nArray is empty.\n");
    else
    {
        int i, j, temp;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        printf("\nElements are sorted : ");
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }
}

void minmax()
{
    int i, max, min, mincount = 0, maxcount = 0;
    max = a[0];
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == max)
            maxcount++;
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == min)
            mincount++;
    }
    printf("Maximum number is =%d \nMinimum number is =%d \n", max, min);
    printf("\nFrequency of Maximum element=%d  \nFrequency of Minimum element=%d\n", maxcount, mincount);
}

void merge()
{
    int a[50], b[50], c[100], i, n, m;

    printf("\nEnter number of element of first array\n");
    scanf("%d", &n);

    printf("\nEnter the elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter number of element of second array\n");
    scanf("%d", &m);

    printf("\nEnter the elements\n");
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < m + n; i++)
    {
        if (i < n)
            c[i] = a[i];
        else
            c[i] = b[i - n];
    }
    printf("\nThe sorted array is : ");
    for (i = 0; i < m + n; i++)
        printf("%d  ", c[i]);
}
int main()
{
    int choice1, choice2, choice3, data, pos, item;
Label1:
    while (1)
    {
        printf("\n1. To insert elements");
        printf("\n2. To delete elements");
        printf("\n3. To traverse the list of elements");
        printf("\n4. To search particular element");
        printf("\n5. To sort elements");
        printf("\n6. To find maximum and minimum element and their frequency");
        printf("\n7. To merge two arrays");
        printf("\n8. To exit");

        printf("\n\nEnter your choice : ");
        scanf("%d", &choice1);

        switch (choice1)
        {
        case 1:
            printf("\n\tInsertion\n");
            while (1)
            {
                printf("\n1. To insert elements");
                printf("\n2. To insert at starting");
                printf("\n3. To insert at any position");
                printf("\n4. To return to the main menu");

                printf("\n\nEnter your choice : ");
                scanf("%d", &choice2);

                switch (choice2)
                {
                case 1:
                    printf("\nEnter number of elements that you want to insert : ");
                    scanf("%d", &n);
                    insert(n);
                    break;
                case 2:
                    printf("\nEnter the number that you want to insert : ");
                    scanf("%d", &data);
                    insertatstart(data);
                    break;
                case 3:
                    printf("\nEnter the number and its position : ");
                    scanf("%d %d", &data, &pos);
                    insertat(data, pos);
                    break;
                case 4:
                    goto Label1;
                    break;
                default:
                    printf("\nInvalid choice...");
                }
            }
            break;
        case 2:
            printf("\n\tDeletion\n");
            while (1)
            {
                printf("\n1. To delete first element");
                printf("\n2. To delete element at any position");
                printf("\n3. To delete last element");
                printf("\n4. To return to main menu");

                printf("\n\nEnter your choice : ");
                scanf("%d", &choice2);

                switch (choice2)
                {
                case 1:
                    deletefirst();
                    break;
                case 2:
                    printf("\nEnter position of element to be deleted :  ");
                    scanf("%d", &pos);
                    deleteat(pos);
                    break;
                case 3:
                    deletelast();
                    break;
                case 4:
                    goto Label1;
                    break;
                default:
                    printf("\nInvalid choice...");
                }
            }
            break;
        case 3:
            printf("\n\tTraversal\n");
            traverse();
            break;
        case 4:
            printf("\n\tSearching\n");
            printf("\nEnter the item you want to search : ");
            scanf("%d", &item);
            search(item);
            break;
        case 5:
            printf("\n\tSorting\n");
            sort();
            break;
        case 6:
            minmax();
            break;
        case 7:
            merge();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("\nInvalid choice...\n");
        }
    }
    return 0;
}

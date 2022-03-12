#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int firstTerm = 0;
    int secondTerm = 1;

    printf("%d  ", firstTerm);
    printf("%d  ", secondTerm);

    int i = 1;
    while(i != n) 
    {
        int nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        printf("%d  ", nextTerm);
        i++;
    }
    return 0;
}
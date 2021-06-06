#include <stdio.h>
#include <stdlib.h>
void main()
{
    int x, y, i, min;
    printf("Enter two nos\n");
    scanf("%d %d", &x, &y);
    min = x < y ? x : y;
    for (i = 2; i <= min; i++)
    {
        if (x % i == 0 && y % i == 0)
            break;
    }
    if (i == min + 1)
        printf("Co-prime nos");
    else
        printf("Not co-prime nos");
}

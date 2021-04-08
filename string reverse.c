#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of string : ");
    scanf("%d" , &n);
    char str[n];
    printf("Enter the string : ");
    scanf("%s" , &str);

    for(int i=0 ; i<n/2 ; i++)
    {
        char temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }
    printf("Reversed string : %s",str);

    return 0;
}

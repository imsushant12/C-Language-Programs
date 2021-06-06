/*
AIM - To take decimal number from the user
      and convert it into binary number.
*/
#include <stdio.h>
#include <stdlib.h>

/*Function declaration*/
int DecimaltoBinary (int);

int main()
{
    int decimal;
    printf("Enter the decimal-number : ");
    scanf("%d" , &decimal);
    printf("Binary equivalent = %d" , DecimaltoBinary(decimal));
    return 0;
}

/*Function to convert decimal to binary*/
int DecimaltoBinary(int decimal)
{
    int binary=0 , remainder=0 , position=1;
    while(decimal != 0)
    {
        remainder = decimal%2;
        binary = binary + remainder * position;
        position = position * 10;
        decimal = decimal/2;
    }
    return(binary);
}

/*

Sample Input/Output:

Enter the decimal-number : 32
Binary equivalent = 100000


Time Complexity : O(n)
Space Complexity : O(1)

*/



#include<stdio.h>
#include<stdlib.h>

void fun(int main_localaddress)
{
    int fun_local;
    int *fun_localaddress = &fun_local;
    printf("Address of main variable=%d\nAddress of local variable=%d\n",main_localaddress,fun_localaddress);

    if(main_localaddress < fun_localaddress)
        printf("\nStack is growing upward\n");
    else
        printf("\nStack is growing downward\n");
}
void main()
{
    int main_local;
    fun(&main_local);
}

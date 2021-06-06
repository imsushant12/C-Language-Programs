#include<stdio.h>
#include<conio.h>
main()
{
 void add(void);
 add();
}
void add()
 {
  int a,b,c;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  printf("Sum is %d",a+b);
 }

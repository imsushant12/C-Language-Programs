main()
{
 int choice,a,b,s;
 printf("\n1. Addition");
 printf("\n2. Odd Even");
 printf("\n3. Print N natural numbers");

 printf("\n \n Enter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
       printf("Enter two numbers");
       scanf("%d %d",&a,&b);
       s=a+b;
       printf("Sum is %d",s);
       break;
  case 2:
       printf("Enter a number");
       scanf("%d",&a);
       a%2==0?printf("Even"):printf("Odd");
       break;
  case 3:
       printf("Enter a number");
       scanf("%d",&a);
       for(b=1;b<=a;b++);
         printf("Sum is %d",b);
       break;
  default:
       printf("Ivalid Choice");
 }
}

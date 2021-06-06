int add(void);
void main()
{
 int s;
 s=add();
 printf("Sum is %d",s);
}
int add()
{
 int a,b,c;
 printf("Enter two numbers");
 scanf("%d %d",&a,&b);
 c=a+b;
 return(c);
}

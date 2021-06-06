int add(int,int);
void main()
{
 int x,y,s;
 printf("Enter two numbers");
 scanf("%d %d",&x,&y);
 s=add(x,y);
 printf("Sum is %d",s);
}
int add(int a,int b)
{
 int c;
 c=a+b;
 return(c);
}

main()
{
 int x,y;
 void add(int,int);  //deceleration statement
 printf("Enter two numbers");
 scanf("%d %d",&x,&y);
 add(x,y);   //call statement,actual argument
}
void add(int a,int b)   //formal argument,IMPORTANT LINE
{
 int c;
 c=a+b;
 printf("sum is %d",c);
}

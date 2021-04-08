main()
{
 int a=0,b=1,n,i,c;
 printf("Enter no of terms in fabonacci series");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("%d \n",a);
  c=a+b;
  a=b;
  b=c;
 }
}

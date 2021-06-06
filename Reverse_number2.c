main()
{
 int x,r;
 printf("Enter a number to find the reverse \n");
 scanf("%d",&x);
 printf("Reverse is \n");
 while(x!=0)
 {
  r=x%10;
  x=x/10;
   printf("%d",r);
 }

}

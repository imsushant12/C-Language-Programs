main()
{
 int x,r,y=0;
 printf("Enter a number to find the reverse \n");
 scanf("%d",&x);
 while(x!=0)
 {
  r=x%10;
  y=y*10+r;
  x=x/10;
 }
 printf("Reverse is %d",y);
}

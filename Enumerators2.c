enum boolean
{
 false,true
};
int x;
 enum boolean isEven(x)
 {
  if(x%2==0)
   return(true);
  else
   return(false);
 }
main()
{
 enum boolean result;
 printf("Enter a number");
 scanf("%d",&x);
 result=isEven(x);
 if(result==true)
  printf("Even number");
 else
  printf("Odd number");
}

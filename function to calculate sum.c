int sum4(int);
main()
{
    int k;
  k=sum4(5);
  printf("Sum=%d",k);
}


//TNRN
void sum1()
{
    int n,i,s=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("Sum=%d",s);
}


//TNRS
int sum2(void)
{
    int n,i,s=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    return(s);
}


//TSRN
void sum3(int n)
{
    int i,s=0;
    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum=%d",s);
}


//TSRS
int sum4(int n)
{
    int i,s=0;
    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    return(s);
}

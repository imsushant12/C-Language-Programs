//TSRS
int SQUARE(int);
main()
{
    int k,x;
    printf("Enter the number");
    scanf("%d",&x);
    k=SQUARE(x);
    printf("Sum of square = %d",k);

}
int SQUARE(int N)
{
    int i,s=0;
    for(i=0;i<=N;i++)
    {
        s=s+i*i;
    }
    return(s);
}

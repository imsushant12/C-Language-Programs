main()
{
    int fib(int);
    int i,n;
    printf("Enter number of Fibonacci series\n");
    scanf("%d",&n);
    printf("\nThe Fibonacci series is : ");
    for(i=1;i<=n;i++)
    {
        printf("%d  ",fib(i));
    }
}
int fib(int n)
{
    if(n==1||n==2)
        return(1);
    return(fib(n-1)+fib(n-2));
}

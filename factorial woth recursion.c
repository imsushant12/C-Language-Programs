int fact(int n)
{
    if(n>0)
        return(n*fact(n-1));
    else
        return 1;
}
main()
{
    int n;
    long result;
    printf("\nEnter the number to find its factorial\n");
    scanf("%d",&n);
    printf("\tFactorial of %d is %ld\n\n\n\n",n,fact(n));
}

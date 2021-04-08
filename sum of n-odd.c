main()
{
    int i=1,n,s=0;
    printf("Enter a natural number");
    scanf("%d",&n);
    while(i<=2*n)
    {
        s=s+i;
        i=i+2;
    }
        printf("\n%d",s);
}

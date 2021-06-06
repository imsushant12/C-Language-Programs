main()
{
    int n,p=1,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        p=p*i;
    printf("Product is %d",p);
}

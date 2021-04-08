main()
{
    int x,y;
    printf("Enter dividend and quotient");
    scanf("%d%d",&x,&y);
    if(x%y==0)
    {
        printf("%d is divisible by %d",x,y);
    }
    else
        printf("%d is not divisible by %d",x,y);
}

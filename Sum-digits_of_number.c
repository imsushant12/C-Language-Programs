main()
{
    int i,r,s=0;
    printf("Enter the number \n");
    scanf("%d",&i);
    while(i!=0)
    {
        r=i%10;
        s=s+r;
        i=i/10;
    }
    printf("Sum is %d",s);
}

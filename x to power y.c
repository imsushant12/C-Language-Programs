main()
{
    int x,y,p=1,i;
    printf("Enter number and its power");
    printf("\nIf you want to find square only then enter the number and 999 : ");
    scanf("%d %d",&x,&y);
    if(y!=999)
    {
        for(i=1;i<=y;i++)
            p=p*x;
        printf("Result is %d",p);
    }
    else
    {
        for(i=1;i<=2;i++)
            p=p*x;
        printf("Result is %d",p);
    }
}

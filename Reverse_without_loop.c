main()
{
    int x,n,r=0,a;
    printf("Enter the  digit number");
    scanf("%d",&n);
    x=n;
    a=x%10;
    x=x/10;
    r=r+a*10000;
    a=x%10;
    x=x/10;
    r=r+a*1000;
    a=x%10;
    x=x/10;
    r=r+a*100;
    a=x%10;
    x=x/10;
    r=r+a*10;
    a=x%10;
    r=r+a;
    if(r==n)
       printf("Reverse is %d and reverse is same",r);
        else
        printf("Reverse is %d and reverse is not same",r);

}


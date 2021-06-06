main()
{
    int a=0,b=0,c=0,tests,i=0;
    scanf("%d",&tests);
    int k[tests];

    for(i=0;i<tests;i++)
    {
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
     if(a>c)
        k[i]=a;
    else
        k[i]=c;
    }
    else
    {
        if(b>c)
            k[i]=b;
        else
            k[i]=c;
    }

    }
    for(i=0;i<tests;i++)
    {
        printf("%d\n",k[i]);
    }

}

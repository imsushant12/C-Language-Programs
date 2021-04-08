main()
{
    int i=0,n=0,count=0,x=0;

    cin>>n;
    for(x=1;x<=n;x++)
    {
        for(i=1;i<=x;i++)
        {
            if(x%i==0)
            count++;
        }
        if(count==2)
            cout<<x;
        count=0;
    }
}

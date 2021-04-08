main()
{
    int a[]={70,30,25,80,60,50,30,75,25,60};
    int i,max1,max2;
    max1=a[0];
    for(i=0;i<10;i++)
    {
       if(max1<a[i])
           max1=a[i];
    }
    max2=a[0];
    for(i=0;i<10;i++)
    {
        if(max2<a[i])
        {
            if(a[i]!=max1)
                max2=a[i];
        }
    }
    printf("%d %d",max1,max2);
}

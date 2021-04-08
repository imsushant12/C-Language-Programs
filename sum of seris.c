main()
{
    int n,N,s,sum,i;
    printf("Enter the no of terms");
    scanf("%d",&N);
    for(n=1;n<=N;n++)
    {
        sum=0;
        s=0;
        for(i=1;i<=n;i++)
        {
            s=s+i;
            sum=sum+s;
        }
    }
    printf("Sum = %d",sum);
}

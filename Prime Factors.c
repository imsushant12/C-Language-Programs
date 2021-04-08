main()
{
    int x,i;
    printf("Enter the number to find the prime factor \n");
    scanf("%d",&x);
    for(i=2;i<=x;i++)
    {
        while(x%i==0)
        {
            printf("%d \n",i);
            x=x/i;
        }
    }
}

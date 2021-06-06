main()
{
    int x,i;
    printf("Enter the number to find its factors");
    scanf("%d",&x);
    printf("Factors are : \n");
    for(i=2;i<=x;i++)
    {
        if(x%i==0)  //can also write if
        {
         x%i==0;
         printf("%d \n",i);
        }
    }
}


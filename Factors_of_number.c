main()
{
    int x,i;
    printf("Enter the number to find its factors");
    scanf("%d",&x);
    printf("Factors are : \n");
    for(i=1;i<=x;i++)
    {
        while(x%i==0)  //we can also write if
        {
         x%i==0;
         printf("%d \n",i);
         i++;
        }
    }
}

main()
{
    int i,count=0;
    printf("Enter the number \n");
    scanf("%d",&i);
    while(i!=0)
    {
     i=i/10;
     count++;
    }
    printf("No of digits is %d",count);
}

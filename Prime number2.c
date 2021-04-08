main()
{
    int x,i;
    printf("Enter the number to check whether prime or not \n");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
        if(x%i==0)
        break;
    if(i==x)
        printf("%d is Prime Number",x);
    else
      printf("%d is not a Prime Number",x);

}

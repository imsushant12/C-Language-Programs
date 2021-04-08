main()
{
    int n,i;
    float c,big;

    printf("Enter the number of elements you wish to find the greatest element of: \n");
    scanf("%d",&n);
    printf("\nEnter %d numbers :\n",n);

    printf("\nElement 1: ");
    scanf("%f", &big);
    for(i = 2; i <= n; i++)
    {
        printf("\nElement %d:",i);
        scanf("%f",&c);
        if(big < c)
        big = c;
    }
    printf("\n\The largest of the %d numbers is  %f ", n, big);
}

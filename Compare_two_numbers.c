main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("Greater number is %d",a);
    else if(a<b)
           printf("%d is greater number",b);
         else
            printf("%d and %d are equal",a,b);
}

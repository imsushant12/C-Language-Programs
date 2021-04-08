main()
{
    int a,b,L;
    printf("Enter the number to find LCM\n");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L=L+(a>b?a:b))
     if(L%a==0&&L%b==0)
        break;
    printf("LCM is %d",L);
}


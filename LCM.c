main()
{
    int a,b,L;
    printf("Enter the number to find LCM\n");
    scanf("%d%d",&a,&b);
    for(L=1;L<=a*b;L++)
     if(L%a==0&&L%b==0)
        break;
    printf("LCM is %d",L);
}

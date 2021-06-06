main()
{
    int sp,profit,cp,cpperitem;
    printf("Enter selling price and profit");
    scanf("%d %d",&sp,&profit);
    cp=sp-profit;
    cpperitem=cp/10;
    printf("Cp is %d",cp);
    printf("Cp per item = %d",cpperitem);
}

main()
{
    int x;
    printf("Enter the amount to know the number of notes");
    scanf("%d",&x);
    printf("No of 100 rupee notes = %d \n",x/100);
    printf("No of 50 rupee notes = %d \n",(x%100)/50);
    printf("No of 10 rupee notes = %d \n",((x%100)%50)/10);
    printf("Remaining amount = %d",((x%100)%50)%10);
}

main()
{
 int s[10],i,sum=0;
 float avg;
 printf("Enter ten numbers");

 for(i=0;i<=9;i++)
  scanf("%d",&s[i]);
 for(i=0;i<=9;i++)
 sum=sum+s[i];
 avg=sum/10.0;
 printf("Average is %f",avg);
}

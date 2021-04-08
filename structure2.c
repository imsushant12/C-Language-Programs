struct date
{
 int d,m,y;
};
void main()
{
 struct date today={17,1,2020},d1;
 d1=today;       //today=d1

 printf("Enter today's date");
 scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
 printf("Date:%d/%d/%d",d1.d,d1.m,d1.y);
}

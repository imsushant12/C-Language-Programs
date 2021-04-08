struct date
{
 int d,m,y;
};
void main()
{
 struct date today,d1;
 today.d=17;
 today.m=1;
 today.y=2020;

 d1.d=today.d;
 d1.m=today.m;
 d1.y=today.y;

 printf("Enter today's date");
 scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
 printf("Date:%d/%d/%d",d1.d,d1.m,d1.y);
}

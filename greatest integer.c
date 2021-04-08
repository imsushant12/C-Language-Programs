main()
{
 int a,b,c;
 printf("Enter three nos");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b&&a>c)
 printf("greatest number is %d",a);
 if(b>a&&b>c)
 printf("greatest number is %d",b);
 else
 printf("greatest number is %d",c);
}

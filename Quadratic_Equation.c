#include<math.h>
main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter coefficient of x^2,x and constant term");
    scanf("%d %d %d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D<0)
        printf("Roots are imaginary");
    if(D==0)
        {
         printf("Roots are equal\n");
         x=-b/(2.0*a);
         printf("%f",x);
        }
    if(D>0)
       {
        printf("Roots are distinct \n");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("Roots are: %f , %f",x,y);
       }

}

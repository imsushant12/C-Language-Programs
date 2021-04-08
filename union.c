union item
{
 int x;float y;char z;
};
main()
{
 union item i1;
 i1.x=5;
 printf("\n %d",i1.x);
 i1.y=6;
 printf("\n %f",i1.y);
 i1.z='a';
 printf("\n %c",i1.z);
 }

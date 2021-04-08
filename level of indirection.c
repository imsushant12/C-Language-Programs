main()
{
 int x=5,*p,**q,***r;
 p=&x;
 q=&p;
 r=&q;
 printf("%d\n",x);
 printf("%d\n",p);
 printf("%d\n",q);
 printf("%d\n",r);
}

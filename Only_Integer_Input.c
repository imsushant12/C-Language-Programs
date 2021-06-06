
main()
{
    int x=0;
    x=IntegerOnly();
    printf("you have entered %d/n",x);
}
int IntegerOnly()
{
    int num=0,ch;
    do
    {
     ch=getch();
     if(ch>=48&&ch<=57)
     {
      printf("%d",ch);
      num=num*10+(ch-48);
     }
     if(ch==13)
        break;
    }while(1);
    return(num);

}

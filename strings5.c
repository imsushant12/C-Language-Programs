main()
{
 char s[3][10];
 int i;
 printf("Enter three names");
 for (i=0;i<=2;i++)
  gets(&s[i][0]);    //gets(s[i])

 for (i=0;i<=2;i++)
  printf("%s\n",s[i]);
}

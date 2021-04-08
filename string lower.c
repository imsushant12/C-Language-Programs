main()
{
 char s[20];
 int i;
 printf("Enter a string");
 gets(s);
 for(i=0;s[i];i++)
 {
  if(s[i]>='A'&&s[i]<='Z')
  s[i]=s[i]+32;
 }
 printf("%s",s);
}

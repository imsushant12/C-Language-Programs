main()
{
 char s[20];
 int i=0,count=0;
 printf("Enter a string\n");
 gets(s);
 while (s[i]!= '\0')
 {
     i++;
 }
 printf("length of string is %d",i);
}

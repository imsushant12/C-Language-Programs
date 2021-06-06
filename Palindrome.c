main()
{
 char s[100],t[100];
 printf("Enter the number or digit to check palindrome\n");
 gets(s);
 strcpy(t,s);
 strrev(t);
 if(strcmp(s,t)==0)
 {
 printf("Palindrome");
 }
 else
 printf("Not a palindrome");
}

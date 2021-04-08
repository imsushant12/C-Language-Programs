main()
{
 char str1[20],str2[20];
 printf("Enter first string");
 gets(str1);
 printf("Enter second string");
 gets(str2);
 if(strcmp(str1,str2)==0)
 {
 printf("\n Strings are equal");
 }
 else
 {
 printf("\n String are not equal");
 }
}

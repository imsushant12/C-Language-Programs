#include<stdio.h>
main()
{
 int i;
 FILE *fp;
 char s[100];
 fp=fopen("f1","w");
 if(fp==NULL)
 {
  printf("File not opened");
  exit(1);
 }
 printf("Enter a string\n");
 gets(s);
 for(i=0;i<strlen(s);i++)
  fputc(s[i],fp);
 getch();
 fclose(fp);
 getch();
}

#include<stdio.h>
main()
{
 char str[20];
 FILE *fp;
 fp=fopen("f1.txt","w");
 if(fp==NULL)
 {
  printf("File not found");
  exit(1);
 }
 printf("Enter whatever you want");
 gets(str);
 fputs(str,fp);  // can work without fclose(fp);
}

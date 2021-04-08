#include<stdio.h>
main()
{
 char ch;
 FILE *fp;
 fp=fopen("f1.txt","r");
 if(fp==NULL)
 {
  printf("File not found");
  exit(1);
 }
 ch=fgetc(fp);

 while(!feof(fp))
 {
  printf("%c",ch);
  ch=fgetc(fp);
 }
 fclose(fp);
}

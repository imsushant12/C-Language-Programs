#include<stdio.h>
main()
{
 char str[10];
 FILE *fp;
 fp=fopen("f1.txt","r");
 if(fp==NULL)
 {
  printf("File not found");
  exit(1);
 }
 while(fgets(str,9,fp)!=NULL)
 {
  printf("%s",str);
 }
}

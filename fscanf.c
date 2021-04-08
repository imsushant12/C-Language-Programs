#include<stdio.h>
main()
{
 int a,b;
 FILE *fp;
 fp=fopen("f1.txt","r");
 if(fp==NULL)
 {
  printf("File not found");
  exit(1);
 }
 fscanf(fp,"%d %d",&a,&b);
 printf("a=%d b=%d",a,b);
}

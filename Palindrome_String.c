main()
{
    char str[20];
    int i,l;
    printf("Enter the string\n");
    gets(str);
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        if(str[i]==str[l-1-i])
            {
            printf("Palindrome");
            }
            else
                printf("Not Palindrome");
    }
}

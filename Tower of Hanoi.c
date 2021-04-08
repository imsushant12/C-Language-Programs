void TOH(int n,char A,char B,char C)
{
    if(n>=1)
    {
        TOH(n-1,A,C,B);
        printf("\t\t%c to %c\n",A,C);
        TOH(n-1,B,A,C);
    }
}
main()
{
    int n;
    printf("Enter the number of disks\n");
    scanf("%d",&n);
    printf("\n\tFor %d disks one have to transfer\n",n);
    TOH(n,'A','B','C');
}

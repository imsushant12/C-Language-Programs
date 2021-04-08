main()
{
    int a[15]={1,2,9,24,13,65,99,52,22,66};
    int index=5,element=51,n=10;
    insertion(a,index,element,n);
    for(int i=0;i<n+1;i++)
        printf("%d ",a[i]);
}
void insertion(int a[],int index,int element,int n)
{
    for(int i=n;i>=index;i--)
        a[i+1]=a[i];
    a[index]=element;
}

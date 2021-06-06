#include<Windows.h>
main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("%d / %d / %d ",stime.wDay,stime.wMonth,stime.wYear);
}

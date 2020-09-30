#include <stdio.h>
#include <time.h>

int main (void)
{
    time_t timep;
    time(&timep);
    printf("UTC time is 0x%08x\n",timep);
    timep=time(NULL);
    printf("UTC time is 0x%08x\n",timep);
    return 0;
}
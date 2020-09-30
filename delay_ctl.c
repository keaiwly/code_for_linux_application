#include <stdio.h>
#include <unistd.h>


int main(void )
{
    int i=1000;
    while (1)
    {
        printf("printf start\n");
        sleep(1);
        printf("1 second sleep\n");
        usleep(1000000);
        printf("1000000 usecond sleep\n");
    }
}
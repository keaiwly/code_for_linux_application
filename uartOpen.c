#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

void main(void)
{
    int fd;
    char *uart3="/dev/ttySAC3";
    if ((fd=open(uart3,O_RDWR|O_CREAT,0777))<0)
    {
        printf("open %s is failed",uart3);
    }
    else
    {
        printf("open %s is successed",uart3);
    }
    

}

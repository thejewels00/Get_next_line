#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
# include "get_next_line.h"

int main()
{
    int fd = open("get_next_line.c", O_RDONLY);
    // int fd1 = open("test1.txt", O_RDONLY | O_CREAT);

    char *buff = get_next_line(fd);
    while (buff)
    {
        printf ("%s", buff);
        free(buff);
        buff = get_next_line(fd);
    }
    return 0;
}
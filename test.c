#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
# include "get_next_line.h"

int main()
{
    int fd = open("41_no_nl", O_RDONLY);
    // int fd1 = open("test1.txt", O_RDONLY | O_CREAT);

    printf("%s", get_next_line(fd));
   // sleep(3);
    printf("%s", get_next_line(fd));

    // printf("%s", get_next_line(fd));

    //char *buff = get_next_line(fd);
    // while (buff)
    // {
    //     printf ("%s", buff);
    //     free(buff);
    //     buff = get_next_line(fd);
    // }
    return 0;
}
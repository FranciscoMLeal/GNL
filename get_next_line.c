#include "get_next_line.h"
#include <stdio.h>

char *get_next_line(int fd)
{
    return(NULL);
}

int main(int argc, char **argv)
{
    int fd;
    fd = 1;
    while (argc > 1)
    {
        printf("%s\n",argv[argc - 1]);
        argc--;
    }
    
}
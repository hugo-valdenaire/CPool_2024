/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** cat
*/

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int my_putstr(char const *str);

int cat_stdin(void)
{
    int size;
    
    while(size != 0) {
        char buff[32000];
        size = read(0, buff, 32000);
        write(1, buff, size);
    }
}

int cat(int ac, char **av)
{
    int fd = 0;
    int size;
    char buff[32000];

    if (ac == 1)
        cat_stdin();
    for (int i = 1; i < ac; i++) {
        fd = open(av[i], O_RDONLY);
        if (fd == -1) {
            my_putstr("cat: ");
            my_putstr(av[i]);
            my_putstr(": No such file or directory");
        }
        size = read(fd, buff, 31999);
        buff[size] = 0;
        write(1, buff, size);
    }
    close(fd);
    return (0);
}

int main(int ac, char **av)
{
    cat(ac, av);
    return (0);
}

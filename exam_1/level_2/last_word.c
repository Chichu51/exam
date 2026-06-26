#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

void ft_last_word(char *str)
{
    int i;
    int fin;

    if(!str)
        return ;
    i = ft_strlen(str) - 1;
    while(i >= 0 && (str[i] == 32 || (str[i] >= 7 && str[i] <= 13)))
        i--;
    fin = i;
    while(i >= 0 && (!(str[i] == 32 || (str[i] >= 7 && str[i] <= 13))))
       i--;
    i = i + 1;
    while (i <= fin)
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    ft_last_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}
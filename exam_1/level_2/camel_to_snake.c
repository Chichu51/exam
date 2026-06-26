#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_camel_to_snake(char *str)
{
    int i;
    char c;

    i = 0;
    if (!str[i])
        return;
    ft_putchar(str[i]);
    i++;
    while(!(str[i] >= 'A' && str[i] <= 'Z'))
    {
        ft_putchar(str[i]);
        i++;
    }
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            ft_putchar('_');
            c = str[i] + 32;
            ft_putchar(c);
            i++;
        }
        while(str[i] && !(str[i] >= 'A' && str[i] <= 'Z'))
        {
            ft_putchar(str[i]);
            i++;
        }
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    ft_camel_to_snake(argv[1]);
    ft_putchar('\n');
    return (0);
}
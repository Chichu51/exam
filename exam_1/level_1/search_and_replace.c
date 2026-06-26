#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_search_and_replace(char *str, char *c1, char *c2)
{
    int i;
    char c;

    i = 0;
    if (c1[1] || c2[1])
        return;
    while(str[i])
    {
        if (str[i] == c1[0])
        {
            c = c2[0];
            ft_putchar(c);
        }
        else 
            ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        ft_putchar('\n');
        return (0);
    }
    ft_search_and_replace(argv[1], argv[2], argv[3]);
    ft_putchar('\n');
    return (0);
}
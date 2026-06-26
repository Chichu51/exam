#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_alpha_mirror(char *str)
{
    int i;
    char c;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            c = 'a' + 25 - (str[i] - 'a');
            ft_putchar(c);
            i++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            c = 'A' + 25 - (str[i] - 'A');
            ft_putchar(c);
            i++;
        }
        else
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
    ft_alpha_mirror(argv[1]);
    ft_putchar('\n');
    return (0);    
}
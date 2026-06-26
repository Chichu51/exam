#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i;
    int neg;
    long int nbr;

    neg = 0;
    i = 0;
    nbr = 0;
    if(str[i] == '-')
    {
        neg = 1;
        i++;
    }
    while(str[i])
    {
        nbr = nbr * 10 + (str[i] - '0');
        i++;
    }
    if(neg != 0)
        nbr = -nbr;
    return (nbr);
}

void ft_putnbr(long int nbr)
{
    if(nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
    if(nbr >= 10)
        ft_putnbr(nbr / 10);
    ft_putchar(nbr % 10 + '0');
}

void    ft_do_op(long int nbr1, char c, long int nbr2)
{
    long int res;

    if(c == '+')
        res = nbr1 + nbr2;
    else if(c == '-')
        res = nbr1 - nbr2;
    else if(c == '*')
        res = nbr1 * nbr2;
    else if (c == '/')
    {
        if(nbr2 == 0)
            return;
        res = nbr1 / nbr2;
    }
    else if (c == '%')
     {
        if(nbr2 == 0)
            return;
        res = nbr1 % nbr2;
    }
    else
        return;
    ft_putnbr(res);
}

int main(int argc, char **argv)
{
    long int nbr1;
    long int nbr2;

    if(argc != 4)
    {
        ft_putchar('\n');
        return (0);
    }
    nbr1 = ft_atoi(argv[1]);
    nbr2 = ft_atoi(argv[3]);
    ft_do_op(nbr1, argv[2][0], nbr2);
    ft_putchar('\n');
    return (0);
}
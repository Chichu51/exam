#include <unistd.h>

int ft_check(int i, char *str)
{
    int j;

    j = 0;
    while(j < i)
    {
        if(str[j] == str[i])
            return (1);
        j++;
    }
    return (0);
}

int ft_is_in(char c, char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (c == str[i])
            return(1);
        i++;
    }
    return (0);
}

void ft_inter(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i])
    {
        if (ft_is_in(s1[i], s2) == 1)
        {
            if (ft_check(i, s1) == 0)
            {
                write(1, &s1[i], 1);
            }
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    ft_inter(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
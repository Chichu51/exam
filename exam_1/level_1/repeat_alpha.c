#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    int r;

    i = 0;
    if(argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    while(argv[1][i])
    {
        if((argv[1][i] >= 'a' && argv[1][i] <= 'z') ||
            (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                r = argv[1][i] - 'a' + 1;
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                r = argv[1][i] - 'A' + 1;
            while(r > 0)
            {
                write(1, &argv[1][i], 1);
                r--;
            }
            i++;
        }
        else
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
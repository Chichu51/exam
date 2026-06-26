#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int k;

    if (len == 0)
        return (0);
    i = 0;
    if (len == 1)
        return(tab[i]);
    k = tab[i];
    i++;
    while(i < len)
    {
        if(k < tab[i])
            k = tab[i];
        i++;
    }
    return (k);
}

int main(void)
{
    int tab[] = {8, 5, 1};

    printf("%d\n", max(tab, 3));
    return (0);
}
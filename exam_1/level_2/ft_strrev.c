void    ft_swap(char *a, char *b)
{
    char c;

    c = *a;
    *a = *b;
    *b = c;
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int i;
    int size;

    i = 0;
    size = ft_strlen(str);
    while (i < size / 2)
    {
        ft_swap(&str[i], &str[size - (1 + i)]);
        i++;
    }
    return (str);
}
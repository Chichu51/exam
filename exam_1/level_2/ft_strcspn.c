int ft_is_reject(char c, const char *reject)
{
    int i;

    i = 0;
    while(reject[i])
    {
        if(reject[i] == c)
            return (1);
        i++;
    }
    return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i;

    i = 0;
    while(!ft_is_reject(s[i], reject))
        i++;
    return (i);
}
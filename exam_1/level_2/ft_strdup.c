#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
char    *ft_strdup(char *src)
{
    int i;
    char *dup;

    i = 0;
    dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (dup == NULL)
        return (NULL);
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
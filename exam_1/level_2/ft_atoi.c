#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int res;
    int neg;

    i = 0;
    neg = 1;
    res = 0;
    while((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            neg = neg * -1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res *10 + (str[i] - '0');
        i++;
    }
    if(neg == -1)
        return (res * neg);
    return (res);
}

int main(void)
{
    printf("%d",ft_atoi("      ---42"));
}
# include "libft.h"

int ft_atoi(const char *str)
{
    int     sign;
    long    reslut;
    size_t  i;

    i = 0;
    sign = 1;
    while ((str[i]) == '+' || (str[i] >= 9 && str[i] <=13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        sign = -1;
        i++;
    }
    reslut = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        reslut = reslut * 10 + (str[i] - '0');
        i++;
    }
    return ((int)(reslut * sign));
}
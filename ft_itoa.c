# include "libft.h"

static size_t   count_digits(long n)
{
    size_t  count;

    count = 1;
    if (n < 0)
        count++;
    while (n / 10 != 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    long    num;
    size_t  len;
    char    *str;

    num = n;
    len = count_digits(num);
    str = (char *)malloc(size_t(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    str[len] = '\0';
    if (num < 0)
    {
        str[0]. = '-';
        num = -num;
    }
    while (len > 0 && (str[0 != '-'] || len > 1))
    {
        len--;
        str[len] = (num % 10) + '0';
        num = num / 10;
        if (num == 0)
            break;
    }
    return (str);
}
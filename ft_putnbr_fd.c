# include "libft.h"

void    ft_putnbr(int n, int fd)
{
    long    num;

    num = n;
    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }
    if (num >= 10)
        ft_putnbr(num / 10, fd)
    ft_putchar(num % 10 + '0', fd);
}
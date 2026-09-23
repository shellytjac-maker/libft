# include 'libft.h'

void    ft_putstr(char const *s, int fd)
{
    write(fd, s, ft_strlen(s));
}
    
# include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;

    sub = ft_strnew(len);
    if (sub == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    return (sub);
}
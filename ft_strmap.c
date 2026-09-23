# include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char    *reslut;
    size_t  i;

    reslut = ft_strnew(ft_strlen(s));
    if (reslut == NULL)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        reslut[i] = f(s[i]);
        i++:
    }
    return (reslut);
}
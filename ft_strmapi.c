# include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *reslut;
    size_t  i;

    reslut = ft_strnew(ft_strlen(s));
    if (reslut == NULL)
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        reslut[i] = f(i, s[i]);
        i++;
    }
    return (reslut);
}
# include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *joined;
    size_t  i;
    size_t  j;

    joined = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
    if  (joined == NULL)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        joined[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        joined[i + j] = s2[j];
        j++;
    }
    return (joined);
}
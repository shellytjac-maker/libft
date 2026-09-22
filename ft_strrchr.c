# include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  i;
    size_t  last;
    int     found;

    i = 0;
    last = 0;
    found = 0;
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
        {
            last = i;
            found = 1;
        }
        i++;
    }
    if ((char)c == '\0')
        return ((char *)(s + i));
    if (found)
        return ((char *)(s + last));
    return (NULL);
}
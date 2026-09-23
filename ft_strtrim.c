# include "libft.h"

static int  is_whitespace(char c)
{
    return (c == ' ' || c == '\n' || c == '\t');
}

char    *ft_strtrim(char const *s)
{
    size_t  strat;
    size_t  end;
    char    *trimmed;

    start = 0;
    while (s[start] != '\0' && is_whitespace(s[start]))
        start++;
    end = ft_strlen(s);
    while (end > start && is_whitespace(s[end - 1]))
        end--;
    trimmed = ft_strsub(s, start, end - start);
    return (trimmed)
}
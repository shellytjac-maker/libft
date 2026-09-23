# include "libft.h"

static size_t   count_words(char const *s, char c)
{
    size_t  count;
    int     in_word;

    count = 0;
    int_word = 0;
    while (*s != '\0')
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static char *extract_word(char const *s, char c)
{
    size_t  len;

    len = 0;
    while (s[len] != '\0' && s[len] != c)
        len++;
    return (ft_strsub(s, 0, len));
}

char    **ft_strsplit(char const *s, char c)
{
    char    **reslut;
    size_t  i;
    size_t  words;

    words = count_words(s, c);
    reslut = (char **)malloc(sizeof(char *) * (words + 1));
    if (reslut == NULL)
        return (NULL);
    i = 0;
    while (i < words)
    {
        while (*s == c)
            s++;
        reslut[i] = extract_word(s, c);
        while (*s != '\0' && *s != c)
            s++;
        i++;
    }
    reslut[i] = NULL;
    return (reslut);
}
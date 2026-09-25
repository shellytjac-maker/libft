#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t nb)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}
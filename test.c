#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buf[100];

	printf("ft_strlen(\"hello\") = %zu (expected 5)\n", ft_strlen("hello"));
	printf("ft_isalpha('a') = %d (expected 1)\n", ft_isalpha('a'));
	printf("ft_isalpha('1') = %d (expected 0)\n", ft_isalpha('1'));
	printf("ft_toupper('a') = %c (expected A)\n", ft_toupper('a'));
	printf("ft_atoi(\"  -42\") = %d (expected -42)\n", ft_atoi("  -42"));

	ft_strcpy(buf, "test string");
	printf("ft_strcpy result = %s (expected 'test string')\n", buf);

	char *dup = ft_strdup("duplicate me");
	printf("ft_strdup result = %s\n", dup);
	free(dup);

	char *joined = ft_strjoin("foo", "bar");
	printf("ft_strjoin result = %s (expected foobar)\n", joined);
	free(joined);

	ft_putstr("ft_putstr works\n");
	ft_putnbr(-12345);
	ft_putchar('\n');

	return (0);
}
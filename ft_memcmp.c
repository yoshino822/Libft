

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t	i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < size)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "Hello\0 Koda";
	char s2[] = "Hello\0 Luna";

	printf("%d\n", ft_memcmp(s2, s1, 10));

	return (0);
}
*/
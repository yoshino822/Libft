

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == '\0')
	{
		return ((char *)str);
	}
	while (*str)
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	return (0);
}
/*
int main()
{
	char	*str;

	str = "Koda";
	printf("%s", ft_strchr(str, 'o'));
	return (0);
}
*/
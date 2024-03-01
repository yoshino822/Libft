

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
int main(void)
{
	const char str[] = "Koda+Luna+Obi";
	const char ch = '+';

	printf("String after \'%c\' is: %s\n", ch, ft_strchr(str, ch));

	return(0);
}*/
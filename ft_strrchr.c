

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;

	len = ft_strlen((char *) str);
	if (c == 0)
	{
		return ((char *)str + len);
	}
	while (len >= 0)
	{
		if (str[len] == c)
		{
			return ((char *)str + len);
		}
		len--;
	}
	return (0);
}
/*
int main(void)
{
	const char str[] = "Koda+Luna+Obi";
	const char ch = '+';

	printf("String after \'%c\' is: %s\n", ch, ft_strrchr(str, ch));

	return (0);
}*/
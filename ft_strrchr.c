#include "libft.h"
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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
int main()
{
	char *str;

	str = "Koda";
	printf("%s", ft_strrchr(str, 'o'));
	return (0);
}*/


#include "libft.h"

char	*ft_strnstr(const char *str, const char *key, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (key == NULL || key[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < size)
	{
		j = 0;
		if (str[i] == key[j])
		{
			while (str[i + j] == key[j] && i + j < size)
			{
				if (key[j + 1] == '\0')
				{
					return ((char *)str + i);
				}
				j++;
			}
		}	
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char	*str;
	char	*key;

	str = "Koda and Luna";
	key = "Luna";
	printf("%s\n", ft_strnstr(str, key, 13));
	return (0);
}*/
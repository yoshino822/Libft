

#include "libft.h"

void	*ft_memchr(const void *list, int c, size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)list;
	i = 0;
	while (i < size)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)list + i);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char	*str;

	str = "Koda";
	printf("%s\n", ft_memchr((char*)str, 'o', 2));
	return (0);
}*/
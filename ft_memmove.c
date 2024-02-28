

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*deststr;
	char	*srcstr;
	size_t	i;

	deststr = dest;
	srcstr = src;
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	if (deststr > srcstr)
		while (size--)
		{
			deststr[size] = srcstr[size];
		}
	else
	{
		i = 0;
		while (i < size)
		{
			deststr[i] = srcstr[i];
			i++;
		}
	}
	return (deststr);
}
/*
int	main()
{
	char	*src;
	char	*dest;

	src = "Koda";

	dest = malloc(sizeof(char) * 5);
	dest[0] = 'L';
	dest[1] = 'u';
	dest[2] = 'n';
	dest[3] = 'a';
	printf("%s\n", (char *) ft_memmove(dest, src, 4));
	return 0;
}*/


#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;
	char	*deststr;
	char	*srcstr;

	deststr = (char *)dest;
	srcstr = (char *)src;
	
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	i = 0;
	while(i < size)
	{
		deststr[i] = srcstr[i];
		i++;
	}

	return (deststr);
}
/*
int main(void)
{
	char src[] = "Hello, World!";
	char dest[20];
	unsigned int size = 10;

	ft_memcpy(dest, src, size);
	printf("Copied String: %s\n", dest);

	return (0);
}*/
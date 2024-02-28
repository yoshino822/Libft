

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
int main()
{
	
	void *test;
	char *src;
	src = malloc(sizeof(char) * 10);
	int i = 0;
	while (i < 10) {
		src[i] = 'a';
	}

	test = malloc(sizeof(char) * 10);

	ft_memcpy(test, src, 8);

	return 0;
}
*/
#include "libft.h"

void	ft_bzero(void *list, size_t size)
{
	size_t	i;
	char	*str;

	str = list;
	i = 0;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
}


void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	arr = (void*)malloc(count * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	ft_bzero(arr, count * size);
	return (arr);
}
/*
int main()
{
    char *test;

	test = ft_calloc(10, sizeof(char));
	return (0);
}*/
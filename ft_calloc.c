

#include "libft.h"

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
int main(void)
{
    char *test;

	test = ft_calloc(10, sizeof(char));
	return (0);
}*/


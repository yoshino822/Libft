

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
/*
int main()
{
	
	void *test;

	test = malloc(sizeof(char) * 10);

	ft_bzero(test, 8);

	return 0;
}
*/

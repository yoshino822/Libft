

#include "libft.h"

void	*ft_memset(void *list, int fill_byte, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = list;
	while (i < size)
	{
		str[i] = fill_byte;
		i++;
	}
	return (list);
}
/*
int main()
{
	
	void *test;

	test = malloc(sizeof(char) * 10);

	ft_memset(test, 'a', 8);

	return 0;
}
*/


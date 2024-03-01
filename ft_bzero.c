

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
int main(void)
{
	char str[50] = "Koda and Luna";
	printf("\nBefore ft_bzero(): %s\n", str);

	// Zero a byte string
	ft_bzero(str, 4*sizeof(char));

	printf("After ft_bzero():  %s", str);
	return (0);
}*/
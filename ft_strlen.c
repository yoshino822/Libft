

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*str;

	str = "Koda";
	printf("The length of this word is: %d", ft_strlen(str));
	return (0);
}*/
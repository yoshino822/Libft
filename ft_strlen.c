

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	int	length_str;
	char	*str;

	str = "Koda";
	ft_strlen(str);
	length_str = ft_strlen(str);
	printf("The length of this word is: %d", length_str);
	return (0);
}*/
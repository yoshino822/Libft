

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}	
	return (0);
}
/*
int	main(void)
{
	 printf("%d\n", ft_isalnum('a'));

	 return (0);
}*/
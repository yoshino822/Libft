

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "HelloWorld";

	ft_strncmp(s2, s1, 5);
	printf("%d\n", ft_strncmp(s2, s1, 5));
	return 0;
}*/
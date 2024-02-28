

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	result = (char *)malloc(sizeof(*s) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
	{
		result[j] = s[i];
		j++;
		i++;
	}
	result[j] = '\0';
	return (result);
}
/*
int	main()
{
	char *src = "Koda and Luna";

	printf("%s\n", ft_substr(src,9, 4));

	return 0;
}*/
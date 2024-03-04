

#include "libft.h"

static int	num_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			count++;
		i++;
	}
	return (count);
}

static char	*attach_str(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	ft_strlcpy(str, (char*)s, i + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**result;

	len = num_words(s, c);
	result = malloc(sizeof(char *) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (s[0] == c)
			s++;
		result[i] = attach_str(s, c);
		if (result[i] == NULL)
		{
			free(result);
			return (NULL);
		}
		s += ft_strlen(result[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
/*
int main(void)
{
	char const *s = "Koda,Luna,Obi";
	char c = ',';

	char **result = ft_split(s, c);
	if (result == NULL)
	{
		printf("Splitting failed!\n");
		return (1);
	}

	printf("Split result:\n");
	int i = 0;
	while ( result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}

	free(result);

	return (0);
}*/


#include "libft.h"

static void	ft_freeup(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
	{
		free(strs);
		i++;
	}
	free(strs);
}

static int	ft_countword(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
		}
		else
		{
			count++;
			while (str[i] != c && str[i])
			{
				i++;
			}
		}
	}
	return (count);
}

static void	ft_strcpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_stralloc(char *str, char c, int *k)
{
	char	*word;
	int		j;

	j = *k;
	word = NULL;
	while (str[*k] != '\0')
	{
		if (str[*k] != c)
		{
			while (str[*k] != '\0' && str[*k] != c)
				*k += 1;
			word = (char *)malloc(sizeof(char) * (*k + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*k += 1;
	}
	ft_strcpy(word, str, c, j);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		len;
	int		pos;

	if (s == NULL)
		return (NULL);
	i = 0;
	pos = 0;
	len = ft_countword((char *)s, c);
	str = (char **)malloc(sizeof(char *) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = NULL;
	while (i < len)
	{
		str[i] = ft_stralloc(((char *)s), c, &pos);
		if (str[i] == NULL)
		{
			ft_freeup(str[i]);
		}
		i++;
	}
	return (str);
}
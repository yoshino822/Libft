

char	*ft_strcpy(char *str, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (str != 0)
	{
		ft_strcpy(str, src);
	}
	return (str);
}
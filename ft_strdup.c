


#include "libft.h"

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
	int	length;

	length = ft_strlen(src);

	str = (char *)malloc(sizeof(char)*(length + 1));
	if (str != NULL)
	{
		ft_strcpy(str, src);
	}
	return (str);
}
/*
int main(void) 
{
   char *src = "Koda";
   char *test1 = "Luna and Obi";
   char *test2 = ft_strdup(test1);
   printf("%s\n", ft_strdup(src));
   printf("test1: %s\n", test1);
   printf("test2: %s\n", test2);
   return 0;
}*/
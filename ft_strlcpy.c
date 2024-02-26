

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count_src;

	i = 0;
	count_src = 0;
	while (src[count_src])
		count_src++;
	if (size < 1)
		return (count_src);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count_src);
}



#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*deststr;
	char	*srcstr;
	size_t	i;

	deststr = dest;
	srcstr = src;
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	if (deststr > srcstr)
		while (size--)
		{
			deststr[size] = srcstr[size];
		}
	else
	{
		i = 0;
		while (i < size)
		{
			deststr[i] = srcstr[i];
			i++;
		}
	}
	return (deststr);
}
/*
int	main()
{
	 char dest[] = "Koda";
   const char src[]  = "Luna";

   printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 4);
   printf("After ft_memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
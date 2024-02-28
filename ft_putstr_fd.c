

#include "libft.h"

void ft_putstr_fd(char *s,int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	write(fd, s, i);
}
/*
int	main()
{
	char   str[] = "Hello";
	ft_putstr_fd(str, 1);
	return (0);
}*/
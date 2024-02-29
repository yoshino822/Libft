

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
// Sample function to print the character and its index
void print_index_and_char(unsigned int index, char *c)
{
	printf("Character at index %u: %c\n", index, *c);
}

int main()
{
	char str[] = "Koda & Luna";

	printf("Original string: %s\n", str);
	ft_striteri(str, &print_index_and_char);
	printf("Modified string: %s\n", str);
	return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:04:36 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 13:04:38 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int main(void)
{
	const char *s = "Koda";
	ft_striteri(s, &print_index_and_char);

	return (0);
}*/

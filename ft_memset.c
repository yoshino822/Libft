/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:04:14 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 13:04:16 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *list, int fill_byte, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = list;
	while (i < size)
	{
		str[i] = fill_byte;
		i++;
	}
	return (list);
}
/*
int main(void)
{
	char str[50] = "Koda and Luna";
	printf("\nBefore ft_memset(): %s\n", str);

	// Fill 5 characters starting from str[4] with '+'
	ft_memset(str + 4, '+', 5*sizeof(char));

	printf("After ft_memset():  %s", str);
	return (0);
}*/

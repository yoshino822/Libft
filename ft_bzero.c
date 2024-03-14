/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:38:37 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 11:38:39 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *list, size_t size)
{
	size_t	i;
	char	*str;

	str = list;
	i = 0;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char str[50] = "Koda and Luna";
	printf("\nBefore ft_bzero(): %s\n", str);

	// Zero a byte string
	ft_bzero(str, 4*sizeof(char));

	printf("After ft_bzero():  %s", str);
	return (0);
}*/
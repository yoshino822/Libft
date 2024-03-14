/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:36:42 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 11:36:45 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_lensize(int num)
{
	unsigned int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len = len + 1;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

void	ft_negative_num(int n, int *sign, unsigned int *num, char *str)
{
	if (n < 0)
	{
		*sign = -1;
		*num = -n;
		str[0] = '-';
	}
	else
	{
		*num = n;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	unsigned int	len;
	int				sign;

	sign = 1;
	len = ft_lensize(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_negative_num(n, &sign, &num, str);
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}
/*
int main(void)
{
	int number = 12345;
	char *str = ft_itoa(number);
	if (str != NULL)
	{
		printf("Integer: %d\nString: %s\n", number, str);
		free(str);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}*/

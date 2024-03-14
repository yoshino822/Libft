/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:42:03 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 11:42:05 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
// Example mapping function that converts lowercase letters to uppercase
char map_function(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

int main(void)
{
	const char *s = "kodaLunaObi";
	char *mapped_str = ft_strmapi(s, &map_function);
	if (mapped_str != NULL)
	{
		printf("Mapped string: %s\n", mapped_str);
		free(mapped_str);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}*/

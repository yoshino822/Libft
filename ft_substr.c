/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:06:21 by ybollen           #+#    #+#             */
/*   Updated: 2024/03/06 13:06:23 by ybollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length;
	char	*result;

	length = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > length)
		return (ft_strdup(""));
	if (length >= len)
		length = len;
	if (ft_strlen(s) - start < length)
		length = ft_strlen(&s[start]);
	result = (char *)ft_calloc(length + 1, sizeof(char));
	if (result)
		ft_strlcpy(result, &s[start], length + 1);
	return (result);
}
/*
int	main(void)
{
	char *src = "Koda and Luna";
	//Copy 4 characters of src (starting from position 9)
	printf("%s\n", ft_substr(src,9, 4));

	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:44:19 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/14 16:17:51 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		c;
	int		len;
	char	*str;

	len = 0;
	c = 0;
	while (src[len] != '\0')
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (c < len + 1)
	{
		str[c] = src[c];
		c++;
	}
	return (str);
}

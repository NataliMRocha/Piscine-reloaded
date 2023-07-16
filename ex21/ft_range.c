/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:26:05 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/14 16:59:21 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)
		return (0);
	res = (int *)malloc(sizeof(int) * (max - min));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:28:23 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/12 12:12:38 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if ((nb == 1) || (nb == 0))
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcruz-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:53:46 by lcruz-ma          #+#    #+#             */
/*   Updated: 2022/10/08 17:45:30 by lcruz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i", ft_iterative_power(5, 0));
	return (0);
}*/

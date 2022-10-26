/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcruz-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:53:30 by lcruz-ma          #+#    #+#             */
/*   Updated: 2022/10/08 15:11:05 by lcruz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb > -2147483648 && nb < 0)
		return (0);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i", ft_iterative_factorial(-1));
	return (0);
}*/

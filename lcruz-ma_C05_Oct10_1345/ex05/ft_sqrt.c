/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcruz-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:46:32 by lcruz-ma          #+#    #+#             */
/*   Updated: 2022/10/09 19:30:43 by lcruz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_sqrt(int nb)
{
	long int	i;
	long int	n;
	
	n = nb;
	i = 2;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(1000000000));
	return (0);
}*/

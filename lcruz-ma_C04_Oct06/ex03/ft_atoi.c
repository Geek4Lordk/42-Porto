/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcruz-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:22:43 by lcruz-ma          #+#    #+#             */
/*   Updated: 2022/10/08 17:17:40 by lcruz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	countminus(char *str)
{
	int	i;
	int	countm;

	i = 0;
	countm = 0;
	while (str[i] > '9' || str[i] < '0')
	{
		if (str[i] == '-')
			countm++;
		i++;
	}
	if (countm % 2 == 0)
		return (1);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0' )
	{
		if (!((str[i] >= '0' && str[i] <= '9') || \
				str[i] == ' ' || str[i] == '-' || str[i] == '+'))
			return (countminus(str) * result);
		if (str[i] <= '9' && str[i] >= '0')
			result = result * 10 + str[i] - '0';
		if (result != 0 && (str[i] < '0' || str[i] > '9'))
			return (countminus(str) * result);
		i++;
	}
	return (countminus(str) * result);
}
/*
int	main(void)
{
	char	str[] = "  ---+--+1234ab567";

	printf("%i\n", ft_atoi(str));
	return (0);
}*/

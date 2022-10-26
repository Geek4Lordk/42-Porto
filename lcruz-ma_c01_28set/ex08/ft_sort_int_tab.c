/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcruz-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:46:49 by lcruz-ma          #+#    #+#             */
/*   Updated: 2022/09/29 17:52:15 by lcruz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	z;

	x = 0;
	while (size > 0)
	{
		x = 0;
		while (x < size - 1)
		{
			if (tab[x] > tab[x + 1])
			{	
				z = tab[x + 1];
				tab[x + 1] = tab[x];
				tab[x] = z;
			}	
			x++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	a[] = {4, 2, 1, 3};

	ft_sort_int_tab(a, 4);
	printf("%d, %d, %d, %d", a[0], a[1], a[2], a[3]);
	return (0);
}*/

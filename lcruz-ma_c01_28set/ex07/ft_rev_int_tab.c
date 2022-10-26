/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcruz-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:15:02 by lcruz-ma          #+#    #+#             */
/*   Updated: 2022/09/29 16:39:12 by lcruz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
void	ft_rev_int_tab(int *tab, int size)
{	
	int	x;
	int	y;
	int	z;

	x = 0;
	y = size - 1;
	while (x < size / 2)
	{
		z = tab[x];
		tab[x] = tab[y];
		tab[y] = z;
		x++;
		y--;
	}
}
/*
int	main(void)
{
	int	a[3] = {1, 2, 3};

	ft_rev_int_tab(a, 3);
	printf("%d,%d,%d", a[0], a[1], a[2]);
	return (0);
}*/

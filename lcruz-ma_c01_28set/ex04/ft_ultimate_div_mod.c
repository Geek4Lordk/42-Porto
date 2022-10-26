/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcruz-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:38:49 by lcruz-ma          #+#    #+#             */
/*   Updated: 2022/09/29 13:11:12 by lcruz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h> */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptr1;
	int	*ptr2;

	a = 56;
	b = 10;
	ptr1 = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}*/

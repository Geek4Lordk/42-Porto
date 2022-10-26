/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcruz-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:08:12 by lcruz-ma          #+#    #+#             */
/*   Updated: 2022/10/05 17:00:08 by lcruz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <bsd/string.h>
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	b = 0;
	c = 0;
	while (src[b] != '\0')
		b++;
	while (dest[a] != '\0')
		a++;
	if (size <= a)
		return (b + size);
	while (src[c] != '\0' && c < size - a - 1)
	{
		dest[a + c] = src[c];
		c++;
	}
	dest[a + c] = '\0';
	return (a + b);
}
/*
int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "Ola";
	char	dest1[] = "Hello";
	char	src1[] = "Ola";

	printf("%zu\n", strlcat(dest, src, 10));
	printf("%s\n", dest);
	printf("%u\n", ft_strlcat(dest1, src1, 10));
	printf("%s\n", dest1);
	return (0);
}*/

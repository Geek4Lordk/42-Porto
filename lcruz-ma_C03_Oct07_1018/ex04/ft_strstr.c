/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcruz-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:46:23 by lcruz-ma          #+#    #+#             */
/*   Updated: 2022/10/06 09:10:54 by lcruz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = 0;
		while (to_find[a] != '\0' && str[i + a] == to_find[a])
			a++;
		if (to_find[a] == '\0')
			return (&str[i]);
		i++;
	}
	if (str[0] == '\0' && to_find[0] == '\0')
		return ("");
	return (0);
}

int	main(int argc, char **str)
{
	argc = 3;
	printf("O meu codigo %s\n", ft_strstr(str[1], str[2]));
	printf("O vdd codigo %s", strstr(str[1], str[2]));
	return (0);
}

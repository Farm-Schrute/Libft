/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:50:19 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 13:56:57 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* int	main (void)
{
	char	c;
	int		i;

	i = -5;
	while (i < 135)
	{
		c = i;
		printf("%d ", isprint(c));
		printf("%d ", ft_isprint(c));
		printf("%c ", i);
		if (isprint(c) == ft_isprint(c))
			printf("Esta OK");
		else
		{
			printf("caracter :%d", c);
			printf("No esta OK");
		}
		printf("\n");
		i ++;
	}
	return (0);
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:30:40 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/20 11:32:56 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/* int	main (void)
{
	char	c;
	int		i;

	i = -5;
	while (i < 135)
	{
		c = i;
		printf("%d ", tolower(c));
		printf("%d ", ft_tolower(c));
		printf("%c ", i);
		if (tolower(c) == ft_tolower(c))
			printf("Esta OK");
		else
		{
			printf("caracter :%c", c);
			printf("No esta OK");
		}
		printf("\n");
		i ++;
	}
	return (0);
} */

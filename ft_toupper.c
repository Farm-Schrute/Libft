/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:21:19 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/20 11:32:53 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
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
		printf("%d ", toupper(c));
		printf("%d ", ft_toupper(c));
		printf("%c ", i);
		if (toupper(c) == ft_toupper(c))
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

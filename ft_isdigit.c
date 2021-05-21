/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:21:24 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 13:34:36 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* int	main (void)
{
	char	c;
	int		i;

	i = 47;
	while (i < 65)
	{
		c = i;
		printf("%d ", isdigit(c));
		printf("%d ", ft_isdigit(c));
		printf("%c ", i);
		if (isdigit(c) == ft_isdigit(c))
			printf("Esta OK");
		else
			printf("No esta OK");
		printf("\n");
		i ++;
	}
	return (0);
} */

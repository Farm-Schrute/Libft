/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:45:03 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 13:46:42 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main (void)
{
	char	c;
	int		i;

	i = -5;
	while (i < 130)
	{
		c = i;
		printf("%d ", isascii(c));
		printf("%d ", ft_isascii(c));
		printf("%c ", i);
		if (isascii(c) == ft_isascii(c))
			printf("Esta OK");
		else
			printf("No esta OK");
		printf("\n");
		i ++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:31:04 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/31 18:16:22 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* int	main (void)
{
	char	c;

	c = '9';
	printf("%d ", isalnum(c));
	printf("%d ", ft_isalnum(c));
	if (isalnum(c) == ft_isalnum(c))
		printf("Esta OK");
	else
		printf("No esta OK");
	return (0);
} */

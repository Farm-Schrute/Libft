/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:07:25 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 13:34:27 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/* int	main (void)
{
	char	c;

	c = 'c';
	printf("%d ", isalpha(c));
	printf("%d ", ft_isalpha(c));
	if (isalpha(c) == ft_isalpha(c))
		printf("Esta OK");
	else
		printf("No esta OK");
	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:02:20 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/21 12:14:26 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *) s = 0;
		i++;
	}
}

/* int	main(void)
{
	char	str[] = "asdasdsada";
	char	str2[] = "asdasdsada";
	size_t	x;

	x = 3;
	bzero(str, x);
	printf("%c ", str[5]);
	ft_bzero(str2, x);
	printf("%c ", str2[5]);
	if (*str == *str2)
	{
		printf("Esta OK");
		printf("\n");
	}
	else
		printf("NO ESTA OK");
	return (0);
} */

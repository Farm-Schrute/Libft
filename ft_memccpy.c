/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:19:09 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/24 17:45:44 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)dst++ = *(unsigned char *)src;
		if (*(unsigned char *)src++ == (unsigned char)c)
			return (dst);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	str[] = "holayadsad";
	char	dest[] = "ad";
	size_t	x;

	x = 6;
	printf("%s ", memccpy(dest, str, '%', x));
	printf("%s ", ft_memccpy(dest, str, '%', x));
	if (memccpy(dest, str, '%', x) == ft_memccpy(dest, str, '%', x))
	{
		printf("Esta OK");
		printf("\n");
	}
	else
		printf("NO ESTA OK");
	return (0);
} */

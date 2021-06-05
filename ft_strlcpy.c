/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:40:57 by cvillalo          #+#    #+#             */
/*   Updated: 2021/06/05 10:55:56 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	contador;

	x = 0;
	contador = 0;
	if (!src || !dst)
		return (0);
	while (src[contador] != '\0')
		contador++;
	if (dstsize != 0)
	{
		while (src[x] != '\0' && x < dstsize - 1)
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	return (contador);
}

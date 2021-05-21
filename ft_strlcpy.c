/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:40:57 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 12:49:27 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	contador;

	x = 0;
	contador = 0;
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

/* int	main(void)
{
	char			str_src[] = "Esto es una prueba";
	char			str_dest[30]; 
	 int size;

	size = 0;

	printf("el valor de origen es: %s\n", str_src);
	printf("el valor de size es: %d\n", size);
	printf("mifuncion:\n");
	size = ft_strlcpy (str_dest, str_src, 30); 
	printf("el valor de destino es: %s\n", str_dest);
	printf("el valor de size es: %d\n", size);
	printf("funcion strlcpy:\n");
	size = strlcpy (str_dest, str_src, 30); 
	printf("el valor de destino es: %s\n", str_dest);
	printf("el valor de size es: %d\n", size);
} */
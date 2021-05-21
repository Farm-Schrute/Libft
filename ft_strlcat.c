/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:00:47 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 12:44:59 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	lenstr_dst;
	unsigned int	lenstr_src;

	lenstr_src = ft_strlen(src);
	lenstr_dst = ft_strlen(dst);
	i = 0;
	while (*(src + i) && (lenstr_dst + i + 1) < dstsize)
	{
		if ((lenstr_dst + i + 1) < dstsize)
			*(dst + lenstr_dst + i) = *(src + i);
		i++;
	}
	*(dst + lenstr_dst + i) = 0;
	if (dstsize < lenstr_dst)
		return (lenstr_src + dstsize);
	else
		return (lenstr_src + lenstr_dst);
}

/* int main(void)
{
	char	*str_base;
	char	dest[100];
	char	*src;
	int		x;
	int pstrlcat;

	str_base = "esto es una ";
	src = "prueba";
	x = 0;
	while (str_base[x] != 0)
	{
		dest[x] = str_base[x];
		x++;
	}
	dest [x] = '\0';
	x = 0;

	pstrlcat = strlcat(dest,src, 15);
	str_base = "esto es una ";
	printf("Cadena concatenada: %s\n", dest);
	printf("longitud %d\n", pstrlcat);
	pstrlcat = 0;
	while (str_base[x] != '\0')
	{
		dest[x] = str_base[x];
		x++;
	}
	dest [x] = '\0';
	pstrlcat = ft_strlcat (dest,src, 15);
	printf("Cadena concatenada: %s\n", dest);
	printf("longitud %d\n", pstrlcat);

} */
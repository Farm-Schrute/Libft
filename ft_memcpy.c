/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:15:51 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/24 16:38:30 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}

/*  int	main(void)
{
	char	src[] = "asdasdsada";
	char	dest[] = "heyyyy";
	size_t	x;

	x = 3;
	printf("%s ", memcpy(dest,src,x));
	printf("%s ", ft_memcpy(dest,src,x));
	if (memcpy(dest,src,x) == ft_memcpy(dest,src,x))
	{
		printf("Esta OK");
		printf("\n");
	}
	else
		printf("NO ESTA OK");
	return (0);
}  */
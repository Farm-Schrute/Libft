/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:40:53 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/24 17:45:53 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((unsigned char *)dst > (const unsigned char *)src)
	{
		while (len--)
			*(unsigned char *)(dst + len) = *(const unsigned char *)(src + len);
	}
	else if ((unsigned char *)dst < (const unsigned char *)src)
		ft_memcpy(dst, src, len);
	return (dst);
}

/* int main ()
{
	char	src[] = "asdasdsada";
	char	dest[] = "hettyysdfsdfsdfsfsfsf";
	size_t	x;

	x = 12;
	printf("%s\n", memmove(dest,src,x));
	printf("%s\n", ft_memmove(dest,src,x));
	if (memmove(dest,src,x) == ft_memmove(dest,src,x))
	{
		printf("Esta OK");
		printf("\n");
	}
	else
		printf("NO ESTA OK");
	return (0);
} */
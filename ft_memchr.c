/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:56:53 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/24 17:00:42 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((*(unsigned char *)(s + i)) == (unsigned char) c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}

/* int	main (void)
{
	char	str[] = "";
	char	c;

	c = 'x';
	printf("%s ", memchr(str, c, 12));
	printf("%s ", ft_memchr(str, c, 12));
	if (memchr(str, c, 12) == ft_memchr(str, c, 12))
		printf("ESTA OK\n");
	else
		printf("NO ESTA OK\n");
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:09:21 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/24 16:33:23 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

/* int	main (void)
{
	char	s1[] = "go";
	char	s2[] = "go";
	size_t	x;

	x = 30;
	printf("%d ", memcmp(s1, s2, x));
	printf("%d ", ft_memcmp(s1, s2, x));
	if (memcmp(s1, s2, x) == ft_memcmp(s1, s2, x))
		printf("ESTA OK\n");
	else
		printf("NO ESTA OK \n");
	return (0);
} */

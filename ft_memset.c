/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:34:58 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/21 13:13:52 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char	str[] = "holaadsad";
	size_t	x;

	x = 3;
	printf("%s ", ft_memset(str, '$', x));
	printf("%s ", memset(str, '$', x));
	if (memset(str, '$', x) == ft_memset(str, '$', x))
	{
		printf("Esta OK");
		printf("\n");
	}
	else
		printf("NO ESTA OK");
	return (0);
}
 */
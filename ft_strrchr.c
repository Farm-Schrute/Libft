/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:54:10 by cvillalo          #+#    #+#             */
/*   Updated: 2021/06/05 10:37:53 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	while (s[x] != '\0')
	{
		if ((s[x] == (char)c))
			y = x;
		x++;
	}
	if (s[x] == (char)c)
		y = x;
	if (y != -1)
		return ((char *)s + y);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:20:29 by cvillalo          #+#    #+#             */
/*   Updated: 2021/06/05 10:37:59 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == (char)c)
			return ((char *) s + x);
		x++;
	}
	if (s[x] == (char)c)
		return ((char *)(s + x));
	return (NULL);
}

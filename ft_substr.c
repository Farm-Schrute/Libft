/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:12:57 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/24 18:33:10 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sn;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (*s == '\0')
		return (ft_strdup(""));
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	sn = malloc (len + 1);
	if (sn == NULL)
		return (NULL);
	while (i < len)
	{
		sn [i] = s[start + i];
		i++;
	}
	sn [i] = '\0';
	return (sn);
}

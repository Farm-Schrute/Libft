/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:12:57 by cvillalo          #+#    #+#             */
/*   Updated: 2021/06/08 15:46:52 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	nlen;

	if (!s)
		return (0);
	if (*s == '\0')
		return (ft_strdup(""));
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	nlen = ft_strlen(s + start);
	if (nlen < len)
		len = nlen;
	ns = (char *)malloc(sizeof(char) * len + 1);
	if (!ns)
		return (0);
	ft_strlcpy(ns, s + start, len + 1);
	return (ns);
}

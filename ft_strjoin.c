/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:33:29 by cvillalo          #+#    #+#             */
/*   Updated: 2021/06/05 11:04:00 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sn;
	size_t	t_len;

	if (!s1 || !s2)
		return (NULL);
	t_len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	sn = malloc(t_len + 1);
	if (!sn)
		return (NULL);
	ft_strlcpy(sn, s1, t_len);
	ft_strlcat(sn, s2, t_len);
	sn[t_len] = '\0';
	return (sn);
}

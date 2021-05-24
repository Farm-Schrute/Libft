/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:54:19 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/24 17:10:43 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == 0)
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (*haystack && i <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, i)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/* int main (void)
{
	char haystack[] = "";
	char needle[] = "asda";
	size_t x;

	x = 65456;

	if (strnstr(haystack,needle,x) == ft_strnstr(haystack,needle,x))
	{
		printf("%p ",strnstr(haystack,needle,x));
		printf("%p ",ft_strnstr(haystack,needle,x));
		printf("Esta OK\n");
	}
	else 
	{
		printf("%p ",strnstr(haystack,needle,x));
		printf("%p ",ft_strnstr(haystack,needle,x));
		printf("NO Esta OK\n");
	}
}  */
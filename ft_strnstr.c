/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:54:19 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 13:03:32 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack[i] && !needle[i])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
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
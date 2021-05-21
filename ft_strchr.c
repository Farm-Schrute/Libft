/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:20:29 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 12:48:57 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;

	x = 0;
	if (!s)
		return (NULL);
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

/* int main ( int argc, char *argv[])
{
	int i;
	printf("\n---strchr---[string|strchr|yours]\n");

	i = 0;
	while (i < argc) 
	{
		printf("%p\n",strchr(argv[i], 'c'));
		printf("%p\n",ft_strchr(argv[i], 'c'));
		
		if (strchr(argv[i], 'c') == ft_strchr(argv[i], 'c'))
			printf("Lo tienes bien\n");
		else
		printf("[%s|%p|%p]\n", argv[i],
			 strchr(argv[i], 'c'), 
			 	ft_strchr(argv[i], 'c'));
		}
		i++;
	}
	printf("\n");

} */
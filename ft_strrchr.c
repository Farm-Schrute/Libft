/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:54:10 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 13:04:45 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	if (!s)
		return (NULL);
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

/* int main ( int argc, char *argv[])
{
	int i;
	printf("\n---strchr---[string|strchr|yours]\n");

	i = 0;
	while (i < argc) 
	{
		printf("%p\n",strrchr(argv[i], 'c'));
		printf("%p\n",ft_strrchr(argv[i], 'c'));
		
		if (strrchr(argv[i], 'c') == ft_strrchr(argv[i], 'c')) {
			printf("Lo tienes bien\n");
		} else {
			printf("[%s|%p|%p]\n", argv[i], 
				strchr(argv[i], 'c'), ft_strrchr(argv[i], 'c'));
		}
		i++;
	}
	printf("\n");

} */
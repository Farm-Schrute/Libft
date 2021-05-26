/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:55:33 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/25 18:20:55 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && (*s1 == *s2) && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *) s2);
}

/* int main(void)
{
	char *str1;
	char *str2;
	int x;

	x = 60;
	str1 = "asdasD";
	str2 = "asdasd";
	x = strncmp(str1,str2,x);
	printf("el valor de x es: %d\n", x);
	x = 60;
	x = ft_strncmp(str1, str2, x);
	printf("el valor de x es: %d\n", x);
} */
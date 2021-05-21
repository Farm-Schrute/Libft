/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:10:13 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 12:50:02 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	x;

	x = 0;
	while (*(s + x))
		x++;
	return (x);
}

/* int main (int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc > 1 )
	{
		while (i < argc)
		{
			printf("longitud: %zu\n",ft_strlen(argv[i]));
			i++;
		}
	}
}
 */
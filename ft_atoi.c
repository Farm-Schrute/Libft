/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:09:01 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/19 12:41:51 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	neg;

	number = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+' )
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		number = (number * 10) + *str - 48 ;
		str++;
	}
	return (number * neg);
}

/* int	main (void)
{
	char str[] = "+-23";
	printf("%d ",atoi(str));
	printf("%d ",ft_atoi(str));
	if (atoi(str) == ft_atoi(str))
		printf("Esta OK");
	else
		printf("No esta OK");
} */
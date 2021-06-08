/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:09:01 by cvillalo          #+#    #+#             */
/*   Updated: 2021/06/08 15:58:48 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	number;
	int		neg;

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
		if (number > 2147483648 && neg == -1)
			return (0);
		else if (number > 2147483647 && neg == 1)
			return (-1);
		str++;
	}
	return ((int)(number * neg));
}

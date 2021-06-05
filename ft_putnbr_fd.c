/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:15:54 by cvillalo          #+#    #+#             */
/*   Updated: 2021/06/05 11:06:35 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	x;
	char	c;

	x = n;
	c = '-';
	if (x < 0)
	{
		write(fd, &c, 1);
		x = -x;
	}
	if (x >= 10)
	{
		ft_putnbr_fd((x / 10), fd);
		ft_putnbr_fd((x % 10), fd);
	}
	else
	{
		c = x + 48;
		write(fd, &c, 1);
	}
}

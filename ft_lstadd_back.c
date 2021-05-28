/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvillalo <cvillalo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:47:12 by cvillalo          #+#    #+#             */
/*   Updated: 2021/05/28 19:54:06 by cvillalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *end;

	if (lst)
	{
		if (*lst)
		{
			end = ft_lstlast(*lst);
			end -> next = new;
		}
		else
			*lst = new;
	}

}
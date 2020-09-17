/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeshet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 14:30:15 by mkeshet           #+#    #+#             */
/*   Updated: 2020/09/17 15:48:15 by mkeshet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int facto;

	i = 1;
	facto = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > i)
	{
		facto *= i;
		i++;
	}
	return (facto);
}

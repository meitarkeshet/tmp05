/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeshet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:50:51 by mkeshet           #+#    #+#             */
/*   Updated: 2020/09/17 16:18:10 by mkeshet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int facto;

	facto = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * (ft_recursive_factorial(nb - 1)));
}

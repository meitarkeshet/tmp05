/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeshet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:20:45 by mkeshet           #+#    #+#             */
/*   Updated: 2020/09/17 19:03:23 by mkeshet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{

	i = 0;
	sign = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		return (nb * (ft_recursive_power(nb, power - 1)));
	else
		return (1);


int		main(void)
{
	int nb = -3;
	int power = 3;

	printf("%d", ft_recursive_power(nb, power));

	return (0);
}

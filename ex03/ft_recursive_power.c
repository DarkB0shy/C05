/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:04:50 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/29 11:27:00 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb == 0 && power == 0)
		result = 1;
	else if (power < 0)
		result = 0;
	while (power > 1)
	{
		result = result * nb;
		power = power - 1;
		ft_recursive_power(result, power);
	}
	return (result);
}

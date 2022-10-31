/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:41:09 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/31 09:46:51 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb > 2)
	{
		while (div < nb)
		{
			if (nb % div == 0)
				return (0);
			div = div + 1;
		}
	}
	return (1);
}

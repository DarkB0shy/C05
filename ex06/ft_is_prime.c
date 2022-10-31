/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:41:09 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/31 09:19:32 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	primesheck;
	int	div;

	div = 2;
	primesheck = 0;
	if (nb == 2)
		return (1);
	else if (nb > 2)
	{
		while (div <= (nb / 2) && primesheck == 0)
		{
			if (nb % div == 0)
				primesheck = primesheck + 1;
			div = div + 1;
		}
	}
	if (primesheck == 0)
		return (1);
	else
		return (0);
}

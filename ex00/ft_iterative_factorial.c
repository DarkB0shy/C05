/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:18:08 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/29 16:17:24 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	multipl;

	multipl = 1;
	if (nb == 0)
		return (multipl);
	else if (nb < 0)
		return (0);
	while (nb > 0)
	{
		multipl *= nb;
		nb--;
	}
	return (multipl);
}

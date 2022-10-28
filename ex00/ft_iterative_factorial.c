/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:18:08 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/28 23:04:25 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	multipl;

	multipl = 1;
	while (nb > 0)
	{
		multipl *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (multipl);
}

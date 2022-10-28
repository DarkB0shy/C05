/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:18:08 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/28 22:31:14 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	multipl;

	multipl = nb - 1;
	if (nb == 1 || nb == 0)
		return (nb);
	else if (nb > 1)
	{
		while (multipl > 1)
		{
			nb = nb * multipl;
			multipl--;
		}
		return (nb);
	}
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:32:59 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/28 23:14:33 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int multipl;

	multipl = 1;
	if (nb > 0)
	{
		multipl *= nb * ft_recursive_factorial(nb - 1);
		nb-=1;
	}
	if (nb < 0)
		return (0);
	return (multipl);
}

int	main (void)
{
	printf("%d", ft_recursive_factorial(4));
	return (0);
}

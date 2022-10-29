/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:27:49 by dcarassi          #+#    #+#             */
/*   Updated: 2022/10/29 17:46:04 by dcarassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	num = nb;
	if (num == 0)
		return (0);
	else if (num == 1)
		return (1);
	i = 2;
	if (i < num)
	{
		while (i * i <= num)
		{
			if (i * i == num)
				return (i);
			i++;
		}
	}
	return (0);
}

int	main (void)
{
	printf("%d", ft_sqrt(6));
	return(0);
}

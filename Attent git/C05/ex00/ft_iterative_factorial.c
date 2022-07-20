/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emesquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:02:42 by emesquit          #+#    #+#             */
/*   Updated: 2022/07/20 19:24:44 by emesquit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	if (nb == 0)
		return (0);
	return (nb * ft_iterative_factorial(nb - 1));
}

int	main(void)
{

	printf("%d", ft_iterative_factorial(5));	
}

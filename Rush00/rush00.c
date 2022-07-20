/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emesquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:58:18 by emesquit          #+#    #+#             */
/*   Updated: 2022/07/09 11:36:29 by emesquit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


void	ft_putchar(int x, int y)
{
	int i;
	int j;
	i = 0;
	j = 0;
	char o;
	char m;
	char l;
	o = 'o';
	m = '-';
	l = '|';

	write(1, &o, 1);
	
	while( i <= y)
	{
		write(1, "\n", 1);
		write(1, &l, 1);
		i++;
	}

	while(j <= x)
	{
		write(1, &m, 1);
		j++;
	}
	
}

int	main(void)
{
	ft_putchar(5, 3);
}

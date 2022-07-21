/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emesquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:33:23 by emesquit          #+#    #+#             */
/*   Updated: 2022/07/21 19:00:36 by emesquit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_params(int argc, char **argv)
{
	int i; 
	
	i = 1; 
	while  (i <= argc)
	{
		write(1, &argv[i][0], 15);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}

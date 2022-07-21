/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emesquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:28:27 by emesquit          #+#    #+#             */
/*   Updated: 2022/07/21 18:31:50 by emesquit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, &str[0], 8);
}

int	main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	return (0);
}

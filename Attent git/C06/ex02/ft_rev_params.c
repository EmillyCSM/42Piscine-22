/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emesquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:35:29 by emesquit          #+#    #+#             */
/*   Updated: 2022/07/22 16:08:33 by emesquit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_print_params(argv[argc - 1]);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}

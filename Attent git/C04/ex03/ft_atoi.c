/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emesquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:58:31 by emesquit          #+#    #+#             */
/*   Updated: 2022/07/20 18:22:46 by emesquit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	skip_white_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] > 9 && str[i] < 14))
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = skip_white_space(str);
	sign = 1;
	result = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

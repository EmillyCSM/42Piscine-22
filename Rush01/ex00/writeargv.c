/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claim_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emesquit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:39:43 by emesquit          #+#    #+#             */
/*   Updated: 2022/07/17 13:18:02 by emesquit         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	**claim_args(int argc, char **argv)
{
	int	i;
	int	j;
	int	n;
	char	val_row_col[8][2];	

	i = 0;
	n = 16;
	while (i < 8)
	{
		j = 0;
		while (j < 2)
		{	
			val_row_col[i][j] = argv[1][n];
			j++;
			n = n + 8;
			if (n == 38)
				n = n - 24;
		}
		n -= 14;
		i++;
	}
	return (val_row_col);
}

void val_row_col-check(char **tab_two_dim)
{
	int sum;

	sum = 0;
	while (i < 8)
	{
		while (j < 1)
		{
			sum = tab_two_dim[i][j] + tab_two_dim[i][j + 1];
			if (sum > 5 || sum < 3)
				write(1, "ERROR", 6);
		
			else
				i++;
		}
	}
	return (tab_two_dim);
}

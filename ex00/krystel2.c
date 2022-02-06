/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   krystel.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knerini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:28:53 by knerini           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/06 17:07:18 by knerini          ###   ########.fr       */
=======
/*   Updated: 2022/02/05 18:03:14 by jonvella         ###   ########.fr       */
>>>>>>> b273d8735a876b491f0abe1b5b1aa61a0445f018
/*                                                                            */
/* ************************************************************************** */

int	ft_checkrow(int k, char *str)
{
	while (i < 4)
	{
		if (str[i] == k)
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkcol(int k, char **str, int nb)
{
	nb = i;
	while (j < 4)
	{
		if (str[j][nb] == k)
			return (0);
		j++;
	}
	return (1);
}

ft_backtracking(char *str[i])
{
	int		j;
	int		l;
	int		v;
	
	k[] = {'1', '2', '3', '4'};
	i = 0;
	j = 0;
	v = 1;
	while (i < 4 || j < 4)
	{
		l = 0;
		while (l < 4)
		{
			if (v ! (ft_checkrow(k, &str[i])) || v ! (ft_checkcol(k, &str[j][i], nb)))
				l++;	
			write(1, &k[l], 1);
			l++;
			i++;
		}
		i = 0;
		j++;
		if (j == 4)
			j = 0;
	}
}

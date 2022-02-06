/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   krystel.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knerini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:28:53 by knerini           #+#    #+#             */
/*   Updated: 2022/02/06 21:04:55 by jonvella         ###   ########.fr       */
/*   Updated: 2022/02/05 18:03:14 by jonvella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkrow(char k, char **str, int i)
{
	int j;
	int c;

	j = 0;
	c = 0;
	while (j < 4)
	{
		if (str[i][j] == k)
			c++;
		j++;
	}
	if(c > 1)
		return(0);
	return (1);
}

int	ft_checkcol(char k, char **str, int nb)
{
	int j;

	j = 0;
	while (j < 4)
	{
		if (str[j][nb] == k)
			return (-1);
		j++;
	}
	return (1);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boxtool.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonvella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:43:34 by jonvella          #+#    #+#             */
/*   Updated: 2022/02/06 21:18:46 by jonvella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

char	putnrv(char tabres, int i)
{
	if (tabres)
		tabres += 1;
	else 
		tabres = '1';
	return(tabres);
}

int rulerow(char *str,char l)
{
	int t;
	char c;
	int j;

	j = 1;
	c = '1';
	t = str[0];
	while(str[j] != '\0')
	{
		if (str[j] > t)
		{
			c++;
			t = str[j];
		}
		j++;
	}
	if (c > l)
	   return(-1);	
	return(1);
}


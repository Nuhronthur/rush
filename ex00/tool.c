/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonvella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:20:05 by jonvella          #+#    #+#             */
/*   Updated: 2022/02/05 17:58:08 by jonvella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*setuppar(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		
		if (src[i] == ' ')
		{
			i++;
		}
		if(src[i] > '4' || src[i] < '1') 
		{
			dest[0] = '0';
			return(dest);
		}
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}

char **putmalloc(char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * (5));
	str[4] = "\0";
	while (i < 4)
	{
		*(str + i) = malloc(sizeof(char) * (5));
		str[i][4] = '\0';
		i++;
	}
	return (str);
}

char	**putpar(char **dest, char *src)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		if (k % 4 == i)
		{
			dest[i][j] = src[k];
			j++;
		}
		k++;
		if (src[k] == '\0')
		{
			i++;
			j = 0;
			k = 0;
		}
	}
	return (dest);
}


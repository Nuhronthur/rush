/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   krystel.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knerini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:28:53 by knerini           #+#    #+#             */
/*   Updated: 2022/02/05 17:59:00 by knerini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  **putpar(char **dest, char *src)
{
	int i;
	int j;
	int k;

	while (src[i] != '\0')
	{
		k = 0;
		while (dest[j][k] != '\0')
		{
			j = i % 4;
			if (j == 0)
			{	
				dest[j][k] = scr[i];
				i++;
			}
			if (j == 1)
			{
				dest[j][k] = src[i];
				i++;
			}
			if (j == 2)
			{
				dest[j][k] = scr[i];
				i++;
			}
			if (j == 3)
			{
				dest[j][k] = src[i];
				i++;
				k++;
			}
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonvella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:05:55 by jonvella          #+#    #+#             */
/*   Updated: 2022/02/06 21:23:01 by jonvella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
char	*setuppar(char *dest, char *src);
char	**putpar(char **dest, char *src);
char	**putmalloc(char **str);
void putstr(char *str);
int verif(char *str, int i);
int solve(char **tabpar, char **tabres);

int main(int ac, char **av)
{
	char	*par;
	char	**tabpar;
	char	**tabres;
	int i;
	int k;


	if (!(av[1]) || !(i = verif(av[1], ac)))
		{
			putstr("Erreur: veuillez rentrer des chiffres");
			return(0);
		}
	tabpar = putmalloc(tabpar);
	tabres = putmalloc(tabres);
	par = malloc(sizeof(char) * 17);
	par[16] = '\0';
	setuppar(par, av[1]);
 	putpar(tabpar, par);
	solve(tabpar, tabres); 
	i = 0;	
	while(i < 4)
	{	
		putstr(tabres[i]);
		putchar('\n');
		i++;
	}
	i = 0;
	while(i < 4)
	{
		free(tabres[i]);
		free(tabpar[i]);
		i++;
	}
	free(tabres);
	free(tabapr);
	return(0);
}

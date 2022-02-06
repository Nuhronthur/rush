/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonvella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:05:55 by jonvella          #+#    #+#             */
/*   Updated: 2022/02/06 08:46:18 by jonvella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
char	*setuppar(char *dest, char *src);
char	**putpar(char **dest, char *src);
char	**putmalloc(char **str);
int main(int ac, char **av)
{
	char	*par;
	char	**tabpar;
	
	tabpar = NULL;
	par = malloc(sizeof(char *) * 17);
	par[16] = '\0';
	setuppar(par, av[1]);
	if (ac != 2)
	{
		printf("%s\n", "Erreur: veuillez rentrer des chiffres");
	}
	if (par[0] == '0'){
		printf("%s\n", "Erreur: veuillez rentrer des chiffres");
		return(0);
	}
	putmalloc(tabpar);
	tabpar[0][0] = par[0];
	putpar(tabpar, par);
	printf("%s\n", par);
	
}

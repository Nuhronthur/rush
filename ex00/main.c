/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonvella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:05:55 by jonvella          #+#    #+#             */
/*   Updated: 2022/02/05 14:06:59 by jonvella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
char	*setuppar(char *dest, char *src);
int main(int ac, char **av)
{
	char	*par;

	par = malloc(sizeof(char *) * 17);
	par[16] = '\0';
	setuppar(par, av[1]);
	if (par[0] == '0'){
		printf("%s\n", "Erreur: veuillez rentrer des chiffres");
		return(0);
	}
	printf("%s\n", par);
	printf("%i\n", ac);
	printf("%s\n", av[1]);
}

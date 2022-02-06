/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamrane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:09:31 by tamrane           #+#    #+#             */
/*   Updated: 2022/02/06 21:41:22 by tamrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
/*void rush_01(int c1up , int c2up, int c3up, int c4up,int c1dn, int c2dn, int c3dn, int c4dn, int l1lft, int l2lft, int l3lft, int l4lft,int l1r,  int l2r, int l3r, int l4r)*/

	int	 check_t(int a, int b)
		 {
			 int t;
			 if(a == 1 && b == 2)
			 {
				 t = 0;
			 }
			 else if(a == 1 && b == 3)
			 {
				 t = 1;
			 }
             else if(a == 2 && b == 1)
			 {
				 t = 2;
			 }
		     else if(a == 2 && b == 2)
			 {
				 t = 3;
			 }
			 else if (a ==2 && b == 3)
			 {
				 t = 4;
			 }
			 else if(a == 3 && b == 1)
			 {
				 t = 5;
			 }
			 else if(a == 3 && b == 2)
			 {
				 t = 6;
			 }
			 else if(a == 4 && b ==1)
			 {
				 t = 7;
			 }
			 else if(a == 1 && b == 4)
			 {
				 t = 8;
			 }
			 return t;  
		 }

int main()
{

	char tab[9][6][5]=
	{
   	{"4123", "4213"}, //1_2

     {"4132", "4231", "4312"}, //1_3

	 {"3214", "3124"}, //2_1

	 {"1423", "2413", "3412", "3241", "3142", "2134"}, //2_2

	 {"1432", "2431", "3421"}, //2_3

     {"2314", "1324", "2134"}, //3_1

	 {"2341", "1342", "1243"},	//3_2

	 {"1234"}, //4_1

	 {"4321"} //1_4
     };
	
	//printf("%c\n", tab[1][0][2]);

 // while(c < 16)
   //{
       //int c = 0;
       //char c[16];
	   int a = check_t(2,1);
	   int b = check_t(2,2);
	   int l2  =0;
	   int l =0;


		  while(tab[a][l][0] != tab[b][l2][0])
		  {
			  l2++;
		  }
		 	  
		  if(tab[a][l][0] == tab[b][l2][0])
		  {
			//c[c] =  tab[a][l][0];
			  
			  printf("%d\n", l);
			  printf("%d\n", l2);
			  printf("%c", tab[a][l][0]);
			 // b = check_t(2,2);	  
		  }
		  
		  if(tab[b][l2][0] < '1')
		  {
			l++;  
		  }

		  
		  
		 
		    
	return 0;	
}
/*
int main()
{
	rush_01(2,2,1,4,3,2,3,1,2,1,2,3,2,3,2,1)
}	*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:55:28 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/09 09:55:47 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void megaphone(int ac, char **av)
{
	int i;
	int j;
	for (i = 1; i < ac; i++ )
	{
		for (j = 0; av[i][j]; j++)
		{
			std::cout << (char) toupper(av[i][j]);
		}
		
	}
	std::cout << std:: endl;
}

int main(int ac, char **av)
{
	if(ac == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac > 1)
		megaphone(ac, av);
	return(0);
}
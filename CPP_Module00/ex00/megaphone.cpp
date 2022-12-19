/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charleshajjar <charleshajjar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:45:23 by charleshajj       #+#    #+#             */
/*   Updated: 2022/12/19 21:07:10 by charleshajj      ###   ########.fr       */
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
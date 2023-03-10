/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:17:09 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/18 19:13:32 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>

int main()
{
	std::vector<int>	v;
	int					s = 16;

	for(int i = 0; i < 10; i++)
		v.push_back(i * 5);
	
	std::vector<int>::iterator	it;
	try {
		it = easyfind(v, s);
		std::cout << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
 	}
}
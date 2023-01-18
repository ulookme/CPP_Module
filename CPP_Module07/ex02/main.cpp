/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:22:33 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/18 15:11:01 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Array<std::string> array(5);

	for (int i = 0; i < 5; i++)
	{
		array[i] = std::string("Hello" + std::to_string(i));
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << std::endl;
	}

	Array<std::string> array2;

	array2 = array;

	for (int i = 0; i < 5; i++)
	{
		std::cout << array2[i] << std::endl;
	}

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:06:13 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/15 18:49:04 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		try
		{
			Bureaucrat test("test", 200);	
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		Bureaucrat a("a", 150);
		Bureaucrat b("b", 1);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << std::endl;
		
		// a.decrementGrade();
	
		// b.incrementGrade();
	
		//std::cout << a << std::endl;
		//std::cout << b << std::endl;
		//std::cout << std::endl;

		a.addIncrement();
		b.removeDecrement();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try {
		Bureaucrat	y("Gil", 1322);
	} catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << "==========================" << std::endl;
	Bureaucrat z("DD", 149);
	std::cout << z <<  std::endl;
	
	return (0);
}
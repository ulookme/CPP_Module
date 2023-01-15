/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:06:13 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/15 19:55:32 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat francis("Francis", 100);
	std::cout << francis << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << "===============================" << std::endl;
	Form form1("Taxes", 100, 50);
	std::cout << form1 << std::endl;
	form1.beSigned(francis);
	std::cout << form1 << std::endl;

	std::cout << "===============================" << std::endl;
	std::cout << "===============================" << std::endl;

	Form form2("NDA", 99, 50);
	std::cout << form2 << std::endl;
	try
	{
		francis.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form2 << std::endl;

	std::cout << "===============================" << std::endl;
	std::cout << "===============================" << std::endl;

	Form form3("Other Paper", 101, 50);
	std::cout << form3 << std::endl;
	francis.signForm(form3);
	std::cout << form3 << std::endl;
	try
	{
		francis.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form3 << std::endl;

	std::cout << "===============================" << std::endl;
	std::cout << "===============================" << std::endl;

	try
	{
		Form formException("NDA", 99, 50);
		std::cout << formException << std::endl;
		formException.beSigned(francis);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "===============================" << std::endl;
	std::cout << "===============================" << std::endl;

	try
	{
		Form formException("Important Form", 1000, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "===============================" << std::endl;
	std::cout << "===============================" << std::endl;

	try
	{
		Form formException("Important Form", 0, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "===============================" << std::endl;
	std::cout << "===============================" << std::endl;

	try
	{
		Form formException("Important Form", 100, 1000);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "===============================" << std::endl;
	std::cout << "===============================" << std::endl;

	try
	{
		Form formException("Important Form", 100, 0);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
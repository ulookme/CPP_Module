/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:06:13 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 17:34:28 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>


int
main()
{
	Bureaucrat chief("Chief", 5);
	Bureaucrat someone("Someone", 140);
	ShrubberyCreationForm forestForm("forest");
	RobotomyRequestForm pancreasForm("my pancreas");
	PresidentialPardonForm nobodyForm("nobody");


	std::cout << "Bureaucrats:" << std::endl << chief << std::endl << someone << std::endl;
	std::cout << std::endl << "Forms:" << std::endl
			  << forestForm << std::endl
			  << pancreasForm << std::endl
			  << nobodyForm << std::endl;

	std::cout << "=================================================" << std::endl;

	std::cout << std::endl << "Try to execute a not signed form:" << std::endl;
	try {
		chief.executeForm(forestForm);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "=================================================" << std::endl;

	std::cout << std::endl << "Sign form but try to execute it with low grade:" << std::endl;
	try {
		std::cout << forestForm << std::endl;
		chief.signForm(forestForm);
		std::cout << forestForm << std::endl;
		someone.executeForm(forestForm);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "=================================================" << std::endl;
	std::cout << "=================================================" << std::endl;

	std::cout << std::endl << "Execute ShrubberyCreationForm:" << std::endl;
	try {
		chief.executeForm(forestForm);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "=================================================" << std::endl;
	std::cout << "=================================================" << std::endl;

	std::cout << std::endl << "Sign and execute RobotomyRequestForm:" << std::endl;
	chief.signForm(pancreasForm);
	chief.executeForm(pancreasForm);

	std::cout << "=================================================" << std::endl;
	std::cout << "=================================================" << std::endl;

	std::cout << std::endl << "Sign and execute nobodyForm:" << std::endl;
	chief.signForm(nobodyForm);
	chief.executeForm(nobodyForm);


	return (0);
}


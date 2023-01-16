/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:06:13 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 14:33:43 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <iostream>

using std::cout; using std::endl;

int
main()
{
	Bureaucrat chief("Chief", 5);
	Bureaucrat someone("Someone", 140);
	ShrubberyCreationForm forestForm("forest");

	cout << "Bureaucrats:" << endl << chief << std::endl << someone << std::endl;
	cout << endl << "Forms:" << endl << forestForm << std::endl;

	std::cout << "=================================================" << std::endl;

	cout << endl << "Try to execute a not signed form:" << endl;
	try {
		chief.executeForm(forestForm);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "=================================================" << std::endl;

	cout << endl << "Sign form but try to execute it with low grade:" << endl;
	try {
		cout << endl << forestForm << std::endl;
		chief.signForm(forestForm);
		cout << endl << forestForm << std::endl;
		someone.executeForm(forestForm);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "=================================================" << std::endl;

	cout << endl << "Execute ShrubberyCreationForm:" << endl;
	try {
		chief.executeForm(forestForm);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}


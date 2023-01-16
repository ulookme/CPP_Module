/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:09:21 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 19:50:58 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &t)
{
	*this= t;
}

Intern& Intern::operator=(const Intern &t)
{
	if(this == &t)
		return(*this);
	return(*this);
}

static Form	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(const std::string form_to_creat, const std::string target_form)
{
	Form *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	for(int i = 0; i < 3; i++)
	{
		if(form_to_creat == forms[i])
		{
			std::cout << "Intern creates " << form_to_creat << " now" << std::endl;
			return(all_forms[i](target_form));
		}
	}
	std::cout << "Interne cannot create a form called " << form_to_creat << std::endl;
	return(NULL);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:19:21 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 17:28:26 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):
Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &t)
{
	_target = t._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &t)
{
	Form::operator=(t);
	_target = t._target;
	return(*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor)
{
	if (issigned() == false)
		throw NotSignedException();
	if (executor.getGrade() > getFormGradeE())
		throw GradeTooLowExeption();

	std::cout << "* Brrrrrrrrrrzzzzzzzzzzz *" << std::endl;

	srand(time(nullptr));
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << "'s robotomization has been a failure, just like Windows 10" << std::endl;
}


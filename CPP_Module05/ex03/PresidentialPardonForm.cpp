/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:19:12 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 17:28:17 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(/* args */)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):
Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &t)
{
	_target = t._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &t)
{
	Form::operator=(t);
	_target = t._target;
	return(*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	if (issigned() == false)
		throw NotSignedException();
	if (executor.getGrade() > getFormGradeE())
		throw GradeTooLowExeption();

	std::cout << this->_target << "a été pardonnée par Zaphod Beeblebrox."<< std::endl;
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:19:31 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 16:22:26 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
	Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &t):Form(t)
{
	_target = t._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &t)
{
	Form::operator=(t);
	_target = t._target;
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor)
{
	std::ofstream f;
	if (issigned() == false)
		throw NotSignedException();
	if (executor.getGrade() > getFormGradeE())
		throw GradeTooLowExeption();

	f.open(_target + "_shrubbery", std::ios::out | std::ios::app);
	for (int i = 0; i < 3; i++)
	{
		f << "         &&& &&  & &&" << std::endl;
		f << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
		f << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
		f << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
		f << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
		f << "&&   && & &| &| /& & % ()& /&&" << std::endl;
		f << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
		f << "     &&     \\|||" << std::endl;
		f << "             |||" << std::endl;
		f << "             |||" << std::endl;
		f << "             |||" << std::endl;
		f << "       , -=-~  .-^- _" << std::endl << std::endl << std::endl;
	}
	f.close();
}



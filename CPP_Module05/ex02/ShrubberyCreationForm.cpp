/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:19:31 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 14:35:43 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string object):
	Form("ShrubberyCreationForm", 145, 137)
{
	_objet = object;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &t):Form(t)
{
	_objet = t._objet;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &t)
{
	Form::operator=(t);
	_objet = t._objet;
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

	f.open(_objet + "_shrubbery", std::ios::out | std::ios::app);
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



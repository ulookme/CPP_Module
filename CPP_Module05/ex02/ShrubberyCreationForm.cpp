/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:19:31 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 10:18:35 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():_gradeE(0), _gradeS(0), _i(false)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &t):_name(t._name), _gradeS(t._gradeS), _gradeE(t._gradeE)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &t)
{
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const char *ShrubberyCreationForm::GradeTooHighExeption::what(void) const throw()
{
	return ("[Grade Too High Exception]\nGrade 1 is the highest grade, so you can't raise your grade any more.");
}

const char *ShrubberyCreationForm::GradeTooLowExeption::what(void) const throw()
{
	return("[Grade Too Low Exception]\nThe grade 150 is the lowest, so you can't lower the grade any more.");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, const int gradeS, const int gradeE):_name(name), _gradeS(gradeS),_gradeE(gradeE) 
{
	_i = 0;
	if(_gradeE < 137 || _gradeS < 145)
		GradeTooLowExeption();
	else if(_gradeE > 137 || _gradeS > 145)
		GradeTooLowExeption();
}

const std::string ShrubberyCreationForm::getShrubberyCreationFormName() const{
	return(this->_name);
}

const int ShrubberyCreationForm::getShrubberyCreationFormGradeE() const{
	return(this->_gradeE);
}

const int ShrubberyCreationForm::getShrubberyCreationFormGradeS() const{
	return(this->_gradeS);
}




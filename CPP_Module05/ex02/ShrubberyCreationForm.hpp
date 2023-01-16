/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:19:35 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 10:22:47 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"


class ShrubberyCreationForm
{
private:
	const std::string _name;
	bool _i;
	const int _gradeS;
	const int _gradeE;
public:
	ShrubberyCreationForm(/* args */);
	ShrubberyCreationForm(const std::string _name, const int gradeS, const int gradeE);
	ShrubberyCreationForm(const ShrubberyCreationForm &t);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &t);

	~ShrubberyCreationForm();

	class GradeTooHighExeption : public std::exception
	{
		public:
			const char  *what(void) const throw();
	};

	class GradeTooLowExeption : public std::exception
	{
	public:
		const char *what(void) const throw();
	};
	const std::string getShrubberyCreationFormName(void) const;
	const int getShrubberyCreationFormGradeE(void) const;
	const int getShrubberyCreationFormGradeS(void) const;
	
	
};

const std::string ShrubberyCreationForm::getShrubberyCreationFormName() const{
	return(this->_name);
}

const int ShrubberyCreationForm::getShrubberyCreationFormGradeE() const{
	return(this->_gradeE);
}

const int ShrubberyCreationForm::getShrubberyCreationFormGradeS() const{
	return(this->_gradeS);
}


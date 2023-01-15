/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:45:56 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/15 18:41:20 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Form
{
private:
	const std::string _name;
	bool  _i;
	const int _gradeS;
	const int _gradeE;

public:
	Form();
	Form(const std::string name, const int gradeS, const int gradeE);
	Form& operator=(const Form &t);
	Form(const Form &t);
	~Form();

	class GradeTooHighExeption : public std::exception {
		public:
			const char *what(void) const throw();
	};

	class GradeTooLowExeption : public std::exception {
		public:
			const char *what(void) const throw();
	};

	const std::string getFormName() const;
	const int getFormGradeS() const;
	const int getFormGradeE() const;
	void beSigned(Bureaucrat &t);


};

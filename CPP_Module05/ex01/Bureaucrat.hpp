/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:06:10 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/15 16:30:22 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name,  int grade);
	Bureaucrat(const Bureaucrat &t);
	Bureaucrat &operator=(const Bureaucrat &t);
	~Bureaucrat();

	class GradeTooHighExeption : public std::exception {
		public:
			const char *what(void) const throw();
	};

	class GradeTooLowExeption : public std::exception {
		public:
			const char *what(void) const throw();
	};

	const std::string getName(void)const ;
	int getGrade(void) const ;
	void addIncrement(void);
	void removeDecrement(void);

};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &ref);
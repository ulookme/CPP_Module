/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:06:00 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/15 16:29:54 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _grade(0)
{
}

Bureaucrat::~Bureaucrat()
{
}

const char * Bureaucrat::GradeTooHighExeption::what() const throw(){
	return ("[Grade Too High Exception]\nGrade 1 is the highest grade, so you can't raise your grade any more.");
}
 
const char *Bureaucrat::GradeTooLowExeption::what() const throw(){
	return("[Grade Too Low Exception]\nThe grade 150 is the lowest, so you can't lower the grade any more.");
}

Bureaucrat::Bureaucrat(const std::string name,  int grade): _name(name), _grade(grade){
	//infi et superieur grade
	if(_grade < 1)
		throw GradeTooHighExeption();
	else if (_grade > 150)
		throw GradeTooLowExeption();
}

Bureaucrat::Bureaucrat(const Bureaucrat &t):_name(t._name){
	_grade = t._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &t){
	_grade = t._grade;
	return(*this);
}

const std::string Bureaucrat::getName(void) const {
	return(_name);
}

int Bureaucrat::getGrade(void) const {
	return(_grade);
}

void Bureaucrat::addIncrement(void){
	if(this->_grade > 1)
		this->_grade -= 1;
	else if (this->_grade == 1)
		throw GradeTooHighExeption();
}

void Bureaucrat::removeDecrement(void){
	if(this->_grade < 150)
		this->_grade += 1;
	else if(this->_grade == 150)
		throw GradeTooLowExeption();
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &ref){
	out << ref.getName() << ", bureaucrat grade " << ref.getGrade()<< " .";
	return(out);
}

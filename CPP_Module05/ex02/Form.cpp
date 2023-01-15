/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:45:45 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/15 19:46:39 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_gradeE(0), _gradeS(0), _i(false)
{
}

Form::~Form()
{
}

Form::Form(const Form &t): _name(t._name), _gradeS(t._gradeS),
_gradeE(t._gradeE), _i(t._i)
{
}

Form& Form::operator=(const Form &t){
	return(*this);
}

const char *Form::GradeTooHighExeption::what() const throw(){
	return ("[Grade Too High Exception]\nGrade 1 is the highest grade, so you can't raise your grade any more.");
}
 
const char *Form::GradeTooLowExeption::what() const throw(){
	return("[Grade Too Low Exception]\nThe grade 150 is the lowest, so you can't lower the grade any more.");
}

Form::Form(std::string name, const int gradeS, const int gradeE):
_name(name), _gradeS(gradeS),_gradeE(gradeE)
{
	_i = 0;
	if(_gradeE < 1 || _gradeS < 1)
		 throw GradeTooHighExeption();
	else if(_gradeE > 150 || _gradeS > 150)
		throw GradeTooLowExeption();
		
}

const std::string Form::getFormName() const {
	return(this->_name);
}

const int Form::getFormGradeS() const {
	return(this->_gradeS);
}

const int Form::getFormGradeE() const {
	return(this->_gradeE);
}

void Form::beSigned(const Bureaucrat &t){
	if(t.getGrade() <= _gradeS && t.getGrade() <= _gradeE)
		throw GradeTooHighExeption();
	else if(this->_i)
		throw GradeTooLowExeption();
	this->_i = true;
}

bool Form::issigned(void) const{
	return(this->_i);
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << "(" << form.getFormName() << ")[" << ((form.issigned()) ? "Signed" : "Unsigned")
		<< "]<Sign:" << form.getFormGradeS() << ",Execute:"
		<< form.getFormGradeE() << ">";
	return (out);
}
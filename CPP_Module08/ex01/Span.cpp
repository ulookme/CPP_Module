/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:20:57 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/18 21:08:12 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int n):_N(n){
	_array.resize(n);
}

Span::~Span()
{
}

Span::Span(const Span &t):_N(t._N), _array(t._array)
{

}

Span& Span::operator=(const Span &t){
	this->_array = t._array;
	this->_N = t._N;
	return(*this);
}

void Span::addNumber(const int &n){
	if(this->_array.size() >= _N)
		throw SpanNoSpaceExceptin();
	this->_array.push_back(n);
}

size_t Span::shortestSpan(){
	
}

size_t Span::longestSpan(){
	if(this->_array.size() <= 1)
		throw IsEmpty();
	std::sort(_array.begin(), _array.end());
	return(*(_array.end() - 1) - *_array.begin());
}

const char* Span::SpanNoSpaceExceptin::what() const throw(){
	return("Span No Space Exception");
}
const char* Span::IsEmpty::what() const throw(){
	return(" Is Empty Exception");
}
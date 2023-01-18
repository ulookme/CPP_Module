/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:21:00 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/18 20:38:51 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
private:
	int _N;
	std::vector<int> _array;
	Span();
public:
	Span(int n);
	Span(const Span &t);
	Span& operator=(const Span &t);
	~Span();
	void addNumber(const int &n);
	size_t shortestSpan();
	size_t longestSpan();
	class  SpanNoSpaceExceptin: public std::exception{
		const char *what() const throw();
	};
	class  IsEmpty: public std::exception{
		const char *what() const throw();
	};
};


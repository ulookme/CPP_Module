/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:21:06 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/18 21:24:48 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

#include <random>

#define RANGE 10

int		main(void)
{
	Span	n(RANGE);
	srand(time(NULL));

	/* Fill span with random values */
	for (int i = 0; i < RANGE; i++) {
		int value = rand() % (RANGE * 100);
		n.addNumber(value);
		std::cout << value << " ; ";
	}
	std::cout << std::endl;

	/* Get shortest and longest spans */
	std::cout << "Shortest Span: " << n.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << n.longestSpan() << std::endl;

	/* Try to add more numbers */
	try {
		n.addNumber(1);
	} catch (std::exception &err) {
		std::cout << err.what() << std::endl;
	}
}
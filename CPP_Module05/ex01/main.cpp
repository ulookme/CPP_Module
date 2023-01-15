/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 20:06:13 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/15 16:34:44 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	try {
		Bureaucrat	a("Gil", 1322);
	} catch (std::exception & error) {
		std::cout << error.what() << std::endl;
	}
	std::cout << "==========================" << std::endl;
	Bureaucrat b("DD", 149);
	std::cout << b <<  std::endl;
}
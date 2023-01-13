/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:20:03 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/13 12:31:24 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap a("testeur00");
	ClapTrap b("testeur01");
	std::cout << "======================================="<< std::endl;
	a.takeDamage(100);
	std::cout << "======================================="<< std::endl;
	a.attack("testeur03");
	std::cout << "======================================="<< std::endl;
	a.beRepaired(5);
	std::cout << "======================================="<< std::endl;
	return(0);
}
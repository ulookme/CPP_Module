/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:20:03 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/13 20:50:52 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	//ScavTrap a("testeur00");
	//ClapTrap b("testeur01");
	FragTrap a("testeur0$");
	std::cout << "======================================="<< std::endl;
	//a.takeDamage(1);
	std::cout << "======================================="<< std::endl;
	//a.attack("testeur03");
	std::cout << "======================================="<< std::endl;
	//a.beRepaired(5);
	std::cout << "======================================="<< std::endl;
	a.highFivesGuys();
	std::cout << "======================================="<< std::endl;
	
	return(0);
}
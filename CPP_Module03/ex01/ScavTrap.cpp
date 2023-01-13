/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:39:41 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/13 19:07:25 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &s): ClapTrap(s)
{
	std::cout << " ScravTrap Default constructor called "<< std::endl;
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << " ScravTrap  destructor called "<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &n): ClapTrap(n)
{
	std::cout << "ScravTrap Copie constructor called "<< std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if(_hit <= 0)
	{
		std::cout << " ScravTrap il dort pour longtemps ;( Bonne chance pour le reveiller  pas d'attack"<< std::endl;
		return ;
	}
	if(_energy <=0)
	{
		std::cout << " ScravTrap pas d'ernergie donc pas d'attak ;( "<< std::endl;
		return ;
	}
	_energy -= 1;
	std::cout << "ScravTrap " << _name << " attacks " << target << " ,causing "<< _attack <<" points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap est entré en mode Gate keeper "<< std::endl;
}
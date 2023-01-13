/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:20:59 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/13 20:55:54 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called "<< std::endl;
}

FragTrap::FragTrap(const std::string &s) : ClapTrap(s)
{
	std::cout << "FragTrap Default constructor called "<< std::endl;
	_hit = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(const FragTrap &n): ClapTrap(n)
{
	std::cout << "FragTrap copie Contructor " << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap ask high fives  " << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if(_hit <= 0)
	{
		std::cout << "FragTrap il dort pour longtemps ;( Bonne chance pour le reveiller  pas d'attack"<< std::endl;
		return ;
	}
	if(_energy <=0)
	{
		std::cout << "FragTrap pas d'ernergie donc pas d'attak ;( "<< std::endl;
		return ;
	}
	_energy -= 1;
	std::cout << "FragTrap " << _name << " attacks " << target << " ,causing "<< _attack <<" points of damage!" << std::endl;
}

void FragTrap::guardGate()
{
	std::cout << "FragTrap est entré en mode Gate keeper "<< std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
	std::cout << " FragTrap assignment operator called "<< std::endl;
	_hit = src._hit;
	_energy = src._energy;
	_attack = src._attack;
	return(*this);
}
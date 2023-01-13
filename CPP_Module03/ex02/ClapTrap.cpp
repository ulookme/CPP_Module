/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:19:51 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/13 20:48:25 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	//std::cout << "Default constructor called "<< std::endl;
}

ClapTrap::ClapTrap(const std::string &name){

	std::cout << "ClapTrap String constructor called "<< std::endl;
	_name = name;
	_hit = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "Copie constructor called "<< std::endl;
	_name = src._name;
	_hit = src._hit;
	_energy = src._energy;
	_attack = src._attack;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called "<< std::endl;
}

void ClapTrap::attack(const std::string& target){
	if(_hit <= 0)
	{
		std::cout << "il dort pour longtemps ;( Bonne chance pour le reveiller  pas d'attack"<< std::endl;
		return ;
	}
	if(_energy <=0)
	{
		std::cout << "pas d'ernergie donc pas d'attak ;( "<< std::endl;
		return ;
	}
	_energy -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << " ,causing "<< _attack <<" points of damage!" << std::endl;
	
}

void ClapTrap::takeDamage(unsigned int amount){
	if(_hit <= 0)
	{
		std::cout << "il dort pour longtemps ;( Bonne chance pour le reveiller pas de dommage "<< std::endl;
		return ;
	}
	_hit -= amount;
	std::cout << _name << " a " << this->_hit << " points de vie restant!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if(_hit <= 0)
	{
		std::cout << "il dort pour longtemps ;( Bonne chance pour le reveiller pas de repaire :) "<< std::endl;
		return ;
	}
	if(_energy <= 0)
	{
		std::cout << "pas d'ernergie donc pas de reparation ;) "<< std::endl;
		return ;
	}
	_energy -= 1;
	_hit += amount;
	std::cout << "ClapTrap  Repare  life ++" << amount << "!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src){
	std::cout << " assignment operator called "<< std::endl;
	_hit = src._hit;
	_energy = src._energy;
	_attack = src._attack;
	return(*this);
}
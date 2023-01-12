/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:19:51 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/12 23:19:23 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(const std::string &name){

	_name = name;
	_hit = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	_name = src._name;
	_hit = src._hit;
	_energy = src._energy;
	_attack = src._attack;
}

ClapTrap::~ClapTrap()
{

}

void ClapTrap::attack(const std::string& target){

}

void ClapTrap::takeDamage(unsigned int amount){
	
}

void ClapTrap::beRepaired(unsigned int amount){
	
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src){
	_hit = src._hit;
	_energy = src._energy;
	_attack = src._attack;
}
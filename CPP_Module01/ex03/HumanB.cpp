/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:23:16 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/10 16:42:43 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string n)
{
	_name = n;
	_arme = nullptr;
}

void HumanB::setWeapon(Weapon &type){
	this->_arme = &type;
}

void HumanB::attack()
{
	if(_arme)
		std::cout << _name << "  attacks with their " << _arme->getType() << std::endl;
	else
		std::cout << _name << "  attacks with  nothing " << std::endl;

}

HumanB::~HumanB()
{
}
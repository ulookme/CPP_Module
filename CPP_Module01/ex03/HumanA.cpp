/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:23:22 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/10 15:42:09 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &xarme):
	_arme(xarme)
{
	_name = n;
}

void HumanA::attack()
{
	std::cout << _name << "  attacks with their " << _arme.getType() << std::endl;
}

HumanA::~HumanA()
{
}
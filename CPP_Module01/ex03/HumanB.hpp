/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:22:11 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/10 15:05:12 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_arme;
public:
	HumanB();
	HumanB(std::string n);
	void attack();
	void setWeapon(Weapon &type);
	~HumanB();
};

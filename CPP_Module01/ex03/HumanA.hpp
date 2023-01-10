/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:21:19 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/10 15:42:17 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &_arme;
	HumanA();
public:
	HumanA(std::string n, Weapon &arme);
	~HumanA();
	void attack();
};


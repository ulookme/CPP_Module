/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:39:30 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/13 18:55:06 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();
public:

	~ScavTrap();
	ScavTrap(std::string const &s);
	ScavTrap(ScavTrap const &);
	void attack(const std::string &target);
	ScavTrap& operator=(const ScavTrap&);
	void guardGate();
};

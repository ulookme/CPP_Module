/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:20:56 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/13 20:55:34 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap();
public:
	~FragTrap();
	FragTrap(const std::string &s);
	FragTrap(const FragTrap&);
	FragTrap& operator=(const FragTrap &);
	void attack(const std::string &target);
	void guardGate();
	void highFivesGuys();

};

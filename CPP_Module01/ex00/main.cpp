/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:32:29 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/09 16:06:11 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie *Zom;
	Zom = newZombie("Nany");
	Zom->annonce();
	randomChump("le retour");
	delete Zom;
}
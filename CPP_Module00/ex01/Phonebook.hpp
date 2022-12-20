/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charleshajjar <charleshajjar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:53:25 by charleshajj       #+#    #+#             */
/*   Updated: 2022/12/20 18:35:37 by charleshajj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>

class Phonebook{
	private:
			Contact Contact[8];
			int size;
			int index;
	public:
			PhoneBook() : size (0), index (0) {}
            int get_sise(void) const;
            void add_contact(std::string data[5]);
            void display_contact(int i) const;
            void display_phonebook(void) const;
			
}
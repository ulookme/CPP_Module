/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:29:35 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/08 22:50:32 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook(){
	index = 0;
	count = 0;
}

PhoneBook::~PhoneBook(){}

void PhoneBook::add(){
	Contact &new_contact = contact[index];

	std::cout << "First name : " << std::endl;
	std::cin >> new_contact._first;

	std::cout << "Last name : " << std::endl;
	std::cin >> new_contact._last;

	std::cout << "Nickname : " << std::endl;
	std::cin >> new_contact._nick;

	std::cout << "Phone number : " << std::endl;
	std::cin >> new_contact._phone;

	std::cout << "Dark secret : " << std::endl;
	std::cin >> new_contact._secret;

	index++;
	if (index >= 8)
		index = 0;
	count++;
	if (count > 8)
		count = 8;

	std::cout << "Successfully regitered a new contact!" << std::endl;
}

static void		show(const std::string &value)
{
	std::cout << " | ";
	if (value.length() <= 10)
		std::cout << value << std::string(10, ' ').substr(0, 10 - value.length());
	else
		std::cout << value.substr(0, 9) << ".";
}

void PhoneBook::search(){
	if(count == 0)
		std::cout << " Liste de contacte vide " << std::endl;
	else
	{
		for(int i = 0; i < count; i++)
		{
			std::cout << i + 1;
			show(contact[i]._first);
			show(contact[i]._last);
			show(contact[i]._nick);
			show(contact[i]._phone);
			show(contact[i]._secret);
			std::cout << std::endl;
		}

		std::string		in;
		int				input;

		std::cout << "Write the index of the contact you want to see:" << std::endl;
		while (std::cin >> in)
		{
			input = atoi(in.c_str());
			if (input >= 1 && input < count + 1)
				break;
			std::cout << "Invalid index value! Try again.." << std::endl;
		}
		input--;

		std::cout << "First Name: " << contact[input]._first << std::endl
				<< "Last Name: " << contact[input]._last << std::endl
				<< "Nickname: " << contact[input]._nick << std::endl
				<< "Phone: " << contact[input]._phone << std::endl
				<< "Secret: " << contact[input]._secret << std::endl;
	}
}
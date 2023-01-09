/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:30:31 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/08 21:34:44 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "contact.hpp"
#include <iostream>

class PhoneBook
{
private:
	/* data */
	Contact contact[8];
	int index;
	int count;


public:
	PhoneBook(/* args */);
	~PhoneBook();

	void	add();
	void	search();
};

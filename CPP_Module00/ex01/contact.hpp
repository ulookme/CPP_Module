/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:30:49 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/08 21:33:22 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Contact
{
private:
	Contact(const Contact &);
	Contact& operator=(const Contact &);

public:
	std::string _first;
	std::string _last;
	std::string _nick;
	std::string _phone;
	std::string _secret;

	Contact();
	~Contact();

};

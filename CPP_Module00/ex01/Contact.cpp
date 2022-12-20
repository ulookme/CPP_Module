/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charleshajjar <charleshajjar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:50:19 by charleshajj       #+#    #+#             */
/*   Updated: 2022/12/20 17:52:47 by charleshajj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

const std::string& Contact::get_firstname() const
{
	return (this->firstname);
}

const std::string& Contact::get_lastname() const
{
    return (this->lastname);
}

const std::string& Contact::get_nikename() const
{
    return(this->nikename);
}

const std::string& Contact::get_secret() const
{
    return(this->secret);
}

const std::string& Contact::get_number() const
{
    return(this->number);
}

void    Contact::set_firstname(std::string firstname)
{
    this->firstname = firstname;
}

void    Contact::set_lastname(std::string lastname)
{
    this->lastname= lastname;
}

void    Contact::set_nikename(std::string nikename)
{
    this->nikename = nikename;
}

void    Contact::set_secret(std::string secret)
{
    this->secret = secret;
}

void    Contact::set_number(std::string number)
{
    this->number = number;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:05:25 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/17 12:38:54 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalaire.hpp"

Scalaire::Scalaire():_value("error")
{
}

Scalaire::~Scalaire()
{
}

Scalaire::Scalaire(const std::string value):_value(value)
{
}

Scalaire::Scalaire(const Scalaire &t): _value(t._value)
{
}

Scalaire& Scalaire::operator=(const Scalaire &t){
	return(*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:19:35 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 14:11:37 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _objet;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(const std::string object);
	ShrubberyCreationForm(const ShrubberyCreationForm &t);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &t);
	~ShrubberyCreationForm();
	
	void execute(const Bureaucrat& executor);
};


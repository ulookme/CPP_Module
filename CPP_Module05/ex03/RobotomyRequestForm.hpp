/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:19:28 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/16 17:03:47 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &t);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &t);
	~RobotomyRequestForm();
	void execute(const Bureaucrat& executor);
};

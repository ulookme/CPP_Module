/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:04:21 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/10 21:47:24 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
private:
	std::ifstream _readFile;
	std::ofstream _writeFile;
	Replace();

public:
	Replace(const std::string &in, const std::string &out);
	~Replace();
	std::string getContent();
	std::string replace(std::string str, std::string find, std::string rep);
	void setContent(std::string content);
	bool is_open();
};



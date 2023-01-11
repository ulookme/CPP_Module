/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:04:36 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/10 21:47:14 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(const std::string &in, const std::string &out)
{
	_readFile.open(in);
	if (!_readFile.is_open())
		return ;
	_writeFile.open(out);
}

Replace::~Replace()
{
	_readFile.close();
	_writeFile.close();
}

std::string Replace::getContent()
{
	std::string content;
	std::getline(_readFile, content, '\0');
	return(content);
}

std::string Replace::replace(std::string str, std::string find, std::string rep)
{
	std::string::size_type len = find.length();
	std::string::size_type pos = str.find(find.c_str(), 0, len);

	while(pos != std::string::npos)
	{
		str.erase(pos, len);
		str.insert(pos, rep);

		pos += len;
		pos = str.find(find.c_str(), pos, len);
	}

	return str;
}

void Replace::setContent(std::string content)
{
	_writeFile.write(content.c_str(), content.size());
}

bool Replace::is_open()
{
	return _readFile.is_open() && _writeFile.is_open();
}
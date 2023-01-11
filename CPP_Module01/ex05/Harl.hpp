/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:26:17 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/11 11:17:28 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Message_system
{
	private:
	int _type_error;

	public:
	Message_system(int type = 0);
	~Message_system();
	void messageDebug(int type);
	void messageInfos(int type);
	void messageWarning(int type);
	void messageError(int type);

};

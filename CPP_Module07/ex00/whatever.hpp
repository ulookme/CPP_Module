/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:32:58 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/18 10:01:25 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<class T>
void swap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template<class T>
const T &min(T &a, T &b)
{
	return (a < b ? a : b);
}

template<class T>
const T &max(T &a, T &b)
{
	T result;
	return (a > b ? a : b);
}
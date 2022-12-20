/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charleshajjar <charleshajjar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:48:29 by charleshajj       #+#    #+#             */
/*   Updated: 2022/12/20 17:48:34 by charleshajj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Contact {
private:
        std::string firstname;
        std::string lastname;
        std::string nikename;
        std::string secret;
        std::string number;
public:
        const std::string&  get_firstname(void) const;
        const std::string&  get_lastname(void)  const;
        const std::string&  get_nikename(void) const;
        const std::string&  get_secret(void)    const;
        const std::string&  get_number(void)    const;
        void                set_firstname(std::string firstname);
        void                set_lastname(std::string lastname);
        void                set_nikename(std::string nikename);
        void                set_secret(std::string secret);
        void                set_number(std::string number);
};
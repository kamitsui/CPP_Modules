/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 06:03:37 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/09 09:50:44 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file PhoneBook.hpp
 * @brief PhoneBook Class
 *
 * OCF (Orthodox Canonical Form)
 * [-] Default constructor
 * [ ] Copy constructor
 * [ ] Copy assignment operator
 * [ ] Destructor
 * [-] Other : set***(), get***(), isEmpty()
 */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>

/**
 * @brief
 */
class PhoneBook {
  private:
    Contact contacts[8];
    int contactCount;

  public:
    /*************************************************
     *
     * Default Constructor
     *
     *************************************************/

    PhoneBook();

    /*************************************************
     *
     * Setter Functions : Operate contact information.
     *
     *************************************************/

    void addContact();

    /*************************************************
     *
     * Getter Functions : Only refer the information.
     *
     *************************************************/

    void searchContact();
};

#endif // PHONEBOOK_HPP

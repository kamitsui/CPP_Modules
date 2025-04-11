/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 06:03:37 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/11 18:17:04 by kamitsui         ###   ########.fr       */
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
    Contact contacts_[8];
    int contactCount_;

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

    std::string getInputLine();
};

#endif // PHONEBOOK_HPP

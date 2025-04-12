/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 06:03:37 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/12 13:09:44 by kamitsui         ###   ########.fr       */
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
#include <cstdlib> // for std::exit(0)
#include <iomanip>
#include <iostream>
#include <sstream>

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

    /*************************************************
     *
     * Other Functions : input string with std::cin.
     *
     *************************************************/

    std::string getInputLine();

  private:
    /*************************************************
     *
     * Helper Functions : searchContact function.
     *
     *************************************************/

    void displaySavedContacts();
    bool getValidIndex(int &index);
    std::string truncateString(const std::string &str, size_t maxLength);
    void displayContactInfo(Contact &contact);
};

#endif // PHONEBOOK_HPP

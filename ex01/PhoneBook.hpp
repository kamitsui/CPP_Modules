/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 06:03:37 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/12 14:29:53 by kamitsui         ###   ########.fr       */
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
 * [-] Other : Setter:addContact(), Getter:searchContact(), ....
 */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstdlib> // for std::exit(0)
#include <iomanip>
#include <iostream>
#include <sstream>

/**
 * @brief Defines the PhoneBook class.
 *
 * The PhoneBook class manages a collection of contacts, allowing users to
 * add, search for, and display contact information. It has a fixed capacity
 * of 8 contacts.
 */
class PhoneBook {
  private:
    Contact contacts_[8];
    int contactCount_;

  public:
    PhoneBook();
    void addContact();
    void searchContact();
    std::string getInputLine();

  private:
    void displaySavedContacts();
    std::string truncateString(const std::string &str, size_t maxLength);
    bool getValidIndex(int &index);
    void displayContactInfo(Contact &contact);
};

#endif // PHONEBOOK_HPP

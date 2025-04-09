/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:34:57 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/06 06:00:03 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file Contact.cpp
 * @brief Implementation of the Contact class.
 *
 * This file contains the implementation of the Contact class, which represents
 * a contact in a phonebook.
 */

#include "Contact.hpp"

/**
 * @brief Default constractor for the Contact class.
 *
 * Initializes all member variables to empty strings.
 */
Contact::Contact() : firstName(""), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {}

/**
 * @brief Sets first name of contact.
 *
 * @param firstName the first name.
 */
void Contact::setFirstName(const std::string &firstName) { this->firstName = firstName; }

/**
 * @brief Sets last name of contact.
 *
 * @param lastName the last name.
 */
void Contact::setLastName(const std::string &lastName) { this->lastName = lastName; }

/**
 * @brief Sets the nick name of contact.
 *
 * @param nickName the nick name
 */
void Contact::setNickName(const std::string &nickName) { this->nickName = nickName; }

/**
 * @brief Sets the phone number of contact.
 *
 * @param phoneNumber the phone number.
 */
void Contact::setPhoneNumber(const std::string &phoneNumber) { this->phoneNumber = phoneNumber; }

/**
 * @brief Sets the darkest secret of contact.
 *
 * @param darkestSecret the darkest secret.
 */
void Contact::setDarkestSecret(const std::string &darkestSecret) { this->darkestSecret = darkestSecret; }

/**
 * @brief Gets the first name of contact.
 *
 * @return first name
 */
std::string Contact::getFirstName() const { return firstName; }

/**
 * @brief Gets the last name
 *
 * @return last name
 */
std::string Contact::getLastName() const { return lastName; }

/**
 * @brief Gets the nick name of contact.
 *
 * @return nick name
 */
std::string Contact::getNickName() const { return nickName; }

/**
 * @brief Gets the phone number of contact.
 *
 * @return phone number
 */
std::string Contact::getPhoneNumber() const { return phoneNumber; }

/**
 * @brief Gets the darkest secret of contact.
 *
 * @return darkest secret.
 */
std::string Contact::getDarkestSecret() const { return darkestSecret; }

/**
 * @brief Check if an object (contact) has empty member variable.
 *
 * @return true or false
 */
bool Contact::isEmpty() const {
    return firstName.empty() && lastName.empty() && nickName.empty() && phoneNumber.empty() && darkestSecret.empty();
}

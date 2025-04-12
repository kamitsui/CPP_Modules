/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookAddContact.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:02:55 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/12 14:14:18 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
 * @brief Adds a new contact to the phone book.
 *
 * Prompts the user for contact details and adds them to the stored contacts.
 * If the phone book is full (8 contacts), it shifts the existing contacts
 * to make space for the new one, effectively overwriting the oldest contact.
 * All fields (first name, last name, nickname, phone number, darkest secret)
 * are mandatory.
 */
void PhoneBook::addContact() {
    if (contactCount_ >= 8) {
        for (int i = 0; i < 7; ++i) {
            contacts_[i] = contacts_[i + 1];
        }
        contactCount_ = 7;
    }

    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

    std::cout << "First Name: ";
    firstName = getInputLine();
    std::cout << "Last Name: ";
    lastName = getInputLine();
    std::cout << "NickName: ";
    nickName = getInputLine();
    std::cout << "Phone Number: ";
    phoneNumber = getInputLine();
    std::cout << "Darkest Secret: ";
    darkestSecret = getInputLine();

    if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty()) {
        std::cout << "All fields must be filled." << std::endl;
        return;
    }

    contacts_[contactCount_].setFirstName(firstName);
    contacts_[contactCount_].setLastName(lastName);
    contacts_[contactCount_].setNickName(nickName);
    contacts_[contactCount_].setPhoneNumber(phoneNumber);
    contacts_[contactCount_].setDarkestSecret(darkestSecret);

    contactCount_++;
}

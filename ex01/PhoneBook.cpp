/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:28:24 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/11 23:19:45 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file PhoneBook.cpp
 * @brief PhoneBook
 */

#include "PhoneBook.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

/**
 * @brief Default constructor.
 *
 * Initialize a PhoneBook object without contact.
 */
PhoneBook::PhoneBook() : contactCount_(0) {}

std::string PhoneBook::getInputLine() {
    std::string line;
    if (!std::getline(std::cin, line)) {
        std::cout << "\nexit." << std::endl;
        std::exit(0);
    }
    return line;
}
/**
 * @brief addContact() : save a new contact
 *
 * The contact fields are 5 fields as below,
 * firstName, lastName, nickName, phoneNumber, darkest Secret.
 *
 * @note A saved contace can't have empty fields.
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

void displayContactRow(int index, const std::string &firstName, const std::string &lastName,
                       const std::string &nickName) {
    std::cout << std::setw(10) << index << "|" << std::setw(10) << firstName << "|" << std::setw(10) << lastName << "|"
              << std::setw(10) << nickName << std::endl;
}

std::string truncateString(const std::string &str, size_t maxLength) {
    if (str.length() > maxLength) {
        return str.substr(0, maxLength - 1) + ".";
    }
    return str;
}

int PhoneBook::contactSize() { return contactCount_; }

bool getValidIndex(PhoneBook &phoneBook, int &index) {
    // std::string input = getInputLine();
    std::string input = phoneBook.getInputLine();
    if (input.empty())
        return (false);
    std::istringstream iss(input);
    if (!(iss >> index)) {
        std::cout << "Invalid input. Please enter the numbers." << std::endl;
        return (false);
    }
    if (index >= 1 && index <= phoneBook.contactSize()) {
        // if (index >= 1 && index <= 8) {
        char remaining;
        if (iss >> remaining) {
            std::cout << "Warning: Number contains additional characters" << std::endl;
            return (false);
        }
        return (true);
    } else {
        // std::cout << "Invalid index. Please input (1-" << 8 << ")" << std::endl;
        std::cout << "Invalid index. Please input (1-" << phoneBook.contactSize() << ")" << std::endl;
        return (false);
    }
    return (index);
}

/**
 * @brief searchContact() : display a specific contact infomation
 *
 */
void PhoneBook::searchContact(PhoneBook &phoneBook) {
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "NickName" << std::endl;

    for (int i = 0; i < contactCount_; ++i) {
        std::string firstName = truncateString(contacts_[i].getFirstName(), 10);
        std::string lastName = truncateString(contacts_[i].getLastName(), 10);
        std::string nickName = truncateString(contacts_[i].getNickName(), 10);

        displayContactRow(i + 1, firstName, lastName, nickName);
    }

    std::cout << "Enter index: ";
    int index;
    if (getValidIndex(phoneBook, index) != true)
        return;

    // displayContact(contacts_[index - 1]);
    Contact contact = contacts_[index - 1];
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "NickName: " << contact.getNickName() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
    return;
}

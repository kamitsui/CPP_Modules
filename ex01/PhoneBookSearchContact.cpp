/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookSearchContact.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:04:39 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/12 13:09:01 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string PhoneBook::truncateString(const std::string &str, size_t maxLength) {
    if (str.length() > maxLength) {
        return str.substr(0, maxLength - 1) + ".";
    }
    return str;
}

bool PhoneBook::getValidIndex(int &index) {
    std::string input = getInputLine();
    if (input.empty())
        return (false);
    std::istringstream iss(input);
    if (!(iss >> index)) {
        std::cout << "Invalid input. Please enter the numbers." << std::endl;
        return (false);
    }
    if (index >= 1 && index <= contactCount_) {
        char remaining;
        if (iss >> remaining) {
            std::cout << "Warning: Number contains additional characters" << std::endl;
            return (false);
        }
        return (true);
    } else {
        std::cout << "Invalid index. Please input (1-" << contactCount_ << ")" << std::endl;
        return (false);
    }
    return (index);
}

void displayContactRow(int index, const std::string &firstName, const std::string &lastName,
                       const std::string &nickName) {
    std::cout << std::setw(10) << index << "|" << std::setw(10) << firstName << "|" << std::setw(10) << lastName << "|"
              << std::setw(10) << nickName << std::endl;
}

void PhoneBook::displaySavedContacts() {
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "NickName" << std::endl;

    for (int i = 0; i < contactCount_; ++i) {
        std::string firstName = truncateString(contacts_[i].getFirstName(), 10);
        std::string lastName = truncateString(contacts_[i].getLastName(), 10);
        std::string nickName = truncateString(contacts_[i].getNickName(), 10);

        displayContactRow(i + 1, firstName, lastName, nickName);
    }
}

void PhoneBook::displayContactInfo(Contact &contact) {
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "NickName: " << contact.getNickName() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

/**
 * @brief searchContact() : display a specific contact infomation
 *
 */
void PhoneBook::searchContact() {
    displaySavedContacts();
    std::cout << "Enter index: ";
    int index;
    if (getValidIndex(index) != true)
        return;
    displayContactInfo(contacts_[index - 1]);
}

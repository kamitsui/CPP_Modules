/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookSearchContact.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:04:39 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/12 13:34:36 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string PhoneBook::truncateString(const std::string &str, size_t maxLength) {
    if (str.length() > maxLength) {
        return str.substr(0, maxLength - 1) + ".";
    }
    return str;
}

void PhoneBook::displaySavedContacts() {
    // Display header
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "NickName" << std::endl;

    // Display contacts
    for (int i = 0; i < contactCount_; ++i) {
        std::string firstName = truncateString(contacts_[i].getFirstName(), 10);
        std::string lastName = truncateString(contacts_[i].getLastName(), 10);
        std::string nickName = truncateString(contacts_[i].getNickName(), 10);

        std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << firstName << "|" << std::setw(10) << lastName
                  << "|" << std::setw(10) << nickName << std::endl;
    }
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
    } else {
        std::cout << "Invalid index. Please input (1-" << contactCount_ << ")" << std::endl;
        return (false);
    }
    return (true);
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
    if (contactCount_ < 1) {
        std::cout << "No contact information registered." << std::endl;
        return;
    }

    displaySavedContacts();
    std::cout << "Enter index: ";
    int index;
    if (getValidIndex(index) != true)
        return;
    displayContactInfo(contacts_[index - 1]);
}

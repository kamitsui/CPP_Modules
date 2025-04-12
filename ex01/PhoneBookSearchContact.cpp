/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookSearchContact.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:04:39 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/13 01:28:55 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
 * @brief Truncates a string if it exceeds a maximum length.
 *
 * If the input string's length is greater than the specified maximum,
 * it returns a truncated version ending with a period. Otherwise,
 * it returns the original string.
 *
 * @param str The string to potentially truncate.
 * @param maxLength The maximum length the string should have.
 * @return The original string if it's within the limit, or a truncated
 * string ending with a period if it exceeds the limit.
 */
std::string PhoneBook::truncateString(const std::string &str, size_t maxLength) const {
    if (str.length() > maxLength) {
        return str.substr(0, maxLength - 1) + ".";
    }
    return str;
}

/**
 * @brief Displays a formatted list of all saved contacts.
 *
 * Print a table showing the index, first name, last name, and nickname
 * of each contact currently stored.
 */
void PhoneBook::displaySavedContacts() const {
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

/**
 * @brief Get a valid contact index from the user.
 *
 * Prompts for input, validates it as a number within the contact range.
 *
 * @param index Stores the valid index if input is correct.
 * @return True if a valid index is entered, false otherwise.
 */
bool PhoneBook::getValidIndex(int &index) const {
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

/**
 * @brief Displays the information of a given contact.
 *
 * Prints the first name, last name, nick name, phone number, and darkest secret
 * of the provided contact.
 * @param contact A reference to the Contact object to display.
 */
void PhoneBook::displayContactInfo(const Contact &contact) const {
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "NickName: " << contact.getNickName() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

/**
 * @brief Searches for and displays contact information by index
 *
 * Prompts the user for a contact index and displays the corresponding details
 * if a valid index is provided.
 */
void PhoneBook::searchContact() const {
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

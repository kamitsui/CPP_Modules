// PhoneBook.cpp
#include "PhoneBook.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

/**
 * @brief Default constructor.
 *
 * Initialize a PhoneBook object without contact.
 */
PhoneBook::PhoneBook() : contactCount(0) {}

/**
 * @brief addContact() : save a new contact
 *
 * The contact fields are 5 fields as below,
 * firstName, lastName, nickName, phoneNumber, darkest Secret.
 *
 * @note A saved contace can't have empty fields.
 */
void PhoneBook::addContact() {
    if (contactCount >= 8) {
        for (int i = 0; i < 7; ++i) {
            contacts[i] = contacts[i + 1];
        }
        contactCount = 7;
    }

    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

    std::cout << "First Name: ";
    std::getline(std::cin, firstName);
    std::cout << "Last Name: ";
    std::getline(std::cin, lastName);
    std::cout << "NickName: ";
    std::getline(std::cin, nickName);
    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkestSecret);

    if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty()) {
        std::cout << "All fields must be filled." << std::endl;
        return;
    }

    contacts[contactCount].setFirstName(firstName);
    contacts[contactCount].setLastName(lastName);
    contacts[contactCount].setNickName(nickName);
    contacts[contactCount].setPhoneNumber(phoneNumber);
    contacts[contactCount].setDarkestSecret(darkestSecret);

    contactCount++;
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

int getValidIndex() {
    int index = -1;
    bool validInput = false;
    while (!validInput) {
        std::cout << "Enter index: ";
        std::cin >> index;
        if (std::cin.good()) {
            validInput = true;
        } else if (std::cin.eof()) {
            validInput = true;
            std::cout << "EOF entered. Exit program.";
            exit(0);
        } else {
            std::cout << "Invalid input. Please enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return index;
}

/**
 * @brief searchContact() : display a specific contact infomation
 *
 */
void PhoneBook::searchContact() {
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "NickName" << std::endl;

    for (int i = 0; i < contactCount; ++i) {
        std::string firstName = truncateString(contacts[i].getFirstName(), 10);
        std::string lastName = truncateString(contacts[i].getLastName(), 10);
        std::string nickName = truncateString(contacts[i].getNickName(), 10);

        displayContactRow(i + 1, firstName, lastName, nickName);
    }

    std::cout << "Enter index: ";
    int index = getValidIndex();
    if (index < 1 || index > contactCount) {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    Contact contact = contacts[index - 1];
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "NickName: " << contact.getNickName() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
    return;
}

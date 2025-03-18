// PhoneBook.cpp
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact() {
    if (contactCount >= 8) {
        for (int i = 0; i < 7; ++i) {
            contacts[i] = contacts[i + 1];
        }
        contactCount = 7;
    }

    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "First Name: "; std::getline(std::cin, firstName);
    std::cout << "Last Name: "; std::getline(std::cin, lastName);
    std::cout << "Nickname: "; std::getline(std::cin, nickname);
    std::cout << "Phone Number: "; std::getline(std::cin, phoneNumber);
    std::cout << "Darkest Secret: "; std::getline(std::cin, darkestSecret);

    if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty()) {
        std::cout << "All fields must be filled." << std::endl;
        return;
    }

    contacts[contactCount].setFirstName(firstName);
    contacts[contactCount].setLastName(lastName);
    contacts[contactCount].setNickname(nickname);
    contacts[contactCount].setPhoneNumber(phoneNumber);
    contacts[contactCount].setDarkestSecret(darkestSecret);

    contactCount++;
}

void PhoneBook::searchContact() {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < contactCount; ++i) {
        std::string firstName = contacts[i].getFirstName();
        std::string lastName = contacts[i].getLastName();
        std::string nickname = contacts[i].getNickname();

        if (firstName.length() > 10) firstName = firstName.substr(0, 9) + ".";
        if (lastName.length() > 10) lastName = lastName.substr(0, 9) + ".";
        if (nickname.length() > 10) nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << i + 1 << "|"
                  << std::setw(10) << firstName << "|"
                  << std::setw(10) << lastName << "|"
                  << std::setw(10) << nickname << std::endl;
    }

    std::cout << "Enter index: ";
    int index;
    std::cin >> index;
    std::cin.ignore();

    if (index < 1 || index > contactCount) {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    Contact contact = contacts[index - 1];
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:20:03 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/09 09:47:10 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

/**
 * @brief My Awesome PhoneBook
 *
 * @return 0:success
 */
int main(void) {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
            break;
        else {
            // Ignore other input
        }
    }

    return (0);
}

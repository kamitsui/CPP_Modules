/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:20:03 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/13 01:32:29 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
 * @brief Main entry point of the Awesome Phone Book application.
 *
 * This function runs the main loop, prompting the user for commands
 * (ADD, SEARCH, EXIT) and executing the corresponding PhoneBook operations.
 */
int main(void) {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        command = phoneBook.getInputLine();

        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
            break;
        else
            std::cerr << "Invalid input." << std::endl;
    }
    return (0);
}

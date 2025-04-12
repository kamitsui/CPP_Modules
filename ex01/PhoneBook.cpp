/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:28:24 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/12 21:56:33 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file PhoneBook.cpp
 * @brief PhoneBook
 */

#include "PhoneBook.hpp"

/**
 * @brief Default constructor for the PhoneBook class.
 *
 * Initializes the contact count to zero.
 */
PhoneBook::PhoneBook() : contactCount_(0) {}

/**
 * @brief Reads a line of text from standard input.
 *
 * Reads characters from standard input until a newline character is encountered
 * or the end-of-file (EOF) is reached. If EOF is encountered, the program exits.
 *
 * @return The line of text read from standard input.
 */
std::string PhoneBook::getInputLine() const {
    std::string line;
    if (!std::getline(std::cin, line)) {
        std::cout << "\nexit." << std::endl;
        std::exit(0);
    }
    return line;
}

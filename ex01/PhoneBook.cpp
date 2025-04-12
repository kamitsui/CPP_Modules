/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:28:24 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/12 13:09:19 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file PhoneBook.cpp
 * @brief PhoneBook
 */

#include "PhoneBook.hpp"

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

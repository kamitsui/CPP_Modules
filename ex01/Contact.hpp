/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 23:59:45 by kamitsui          #+#    #+#             */
/*   Updated: 2025/03/20 00:05:38 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Contact.hpp

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

/**
 * @brief Represents a contact in a phonebook.
 *
 * This class encapsulates the information about a contact,
 * including their first name, last name, nickname, phone number, and
 * darkest secret.
 */
class Contact {
private:
	// Contact information
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
	/**
	 * @brief Default constructor.
	 *
	 * Initializes a Contact object with empty fields.
	 */
    Contact();

	// Seter Functions : member modify
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setNickname(const std::string& nickname);
    void setPhoneNumber(const std::string& phoneNumber);
    void setDarkestSecret(const std::string& darkestSecret);

	// Getter Functions
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

	// Check Function
    bool isEmpty() const;
};

#endif // CONTACT_HPP

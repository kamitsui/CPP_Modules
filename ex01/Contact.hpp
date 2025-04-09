/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 23:59:45 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/08 17:57:05 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file Contact.hpp
 * @brief Contact Class
 *
 * OCF (Orthodox Canonical Form)
 * [-] Default constructor
 * [ ] Copy constructor
 * [ ] Copy assignment operator
 * [ ] Destructor
 * [-] Other : set***(), get***(), isEmpty()
 */

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
    /*************************************************
     *
     * Contact information. (Mebmer variable of Class)
     *
     *************************************************/
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

  public:
    /*************************************************
     *
     * Default Constructor
     *
     *************************************************/
    Contact();

    /*************************************************
     *
     * Setter Functions : Operate contact information.
     *
     *************************************************/

    void setFirstName(const std::string &firstName);
    void setLastName(const std::string &lastName);
    void setNickName(const std::string &nickName);
    void setPhoneNumber(const std::string &phoneNumber);
    void setDarkestSecret(const std::string &darkestSecret);

    /*************************************************
     *
     * Getter Functions : Only refer the information.
     *
     *************************************************/

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    /*************************************************
     *
     * Check Functions
     *
     *************************************************/

    /**
     * @brief Check if the contact's fields are empty.
     *
     * @return True if all fields are empty, False otherwise.
     */
    bool isEmpty() const;
};

#endif // CONTACT_HPP

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 23:59:45 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/12 14:28:14 by kamitsui         ###   ########.fr       */
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
 * @brief Defines the Contact class.
 *
 * The Contact class represents a single entry in the phone book,
 * storing information such as first name, last name, nickname,
 * phone number, and a darkest secret.
 */
class Contact {
  private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

  public:
    Contact();
    void setFirstName(const std::string &firstName);
    void setLastName(const std::string &lastName);
    void setNickName(const std::string &nickName);
    void setPhoneNumber(const std::string &phoneNumber);
    void setDarkestSecret(const std::string &darkestSecret);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    bool isEmpty() const;
};

#endif // CONTACT_HPP

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 19:47:45 by kamitsui          #+#    #+#             */
/*   Updated: 2025/04/12 22:23:46 by kamitsui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        for (size_t j = 0; j < arg.length(); ++j)
            std::cout << static_cast<char>(std::toupper(arg[j]));
    }
    std::cout << std::endl;
    return (0);
}

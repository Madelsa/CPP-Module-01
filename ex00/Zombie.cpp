/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:35:29 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/13 16:10:36 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    if (name == "Foo")
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    else
        std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;

}
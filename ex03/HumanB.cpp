/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:03:26 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/19 23:20:29 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

void HumanB::attack()
{
    if (weapon == nullptr || weapon->getType().empty())
    {
        std::cout << name << " has no weapon!" << std::endl;
    }
    else
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB(){}

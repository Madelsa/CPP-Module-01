/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:03:26 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/20 12:56:37 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr){}

void HumanB::attack()   
{
    if (!weapon || weapon->getType().empty())
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

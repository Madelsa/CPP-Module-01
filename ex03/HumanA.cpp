/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:58:01 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/19 23:22:54 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack()
{
    if (weapon.getType().empty())
    {
        std::cout << name << " has no weapon!" << std::endl;
    }
    else
    {
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
    }
}

HumanA::~HumanA(){}


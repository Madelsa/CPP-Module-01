/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:39:22 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/19 16:47:33 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){}

void Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string &Weapon::getType()
{
    return (type);
}


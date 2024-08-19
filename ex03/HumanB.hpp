/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:44:11 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/19 17:32:34 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
    Weapon *weapon;
    std::string name;

    public:
    void attack();
    void setWeapon(Weapon &weapon);
    HumanB(std::string name);
};

#endif
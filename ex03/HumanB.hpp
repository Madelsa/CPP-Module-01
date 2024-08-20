/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:44:11 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/20 12:45:50 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
    std::string name;
    Weapon *weapon;

    public:
    void attack();
    void setWeapon(Weapon &weapon);
    HumanB(std::string name);
    ~HumanB();
};

#endif
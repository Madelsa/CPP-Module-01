/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:52:49 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/18 17:34:49 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << "invalid number of zombies to create." << std::endl;
        return nullptr;
    }
    Zombie *zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombie[i].setName(name);
        std::cout << "Zombie " << i + 1 << ": " << std::endl;
        zombie[i].announce();
       
    }
    std::cout << std::endl;
    return zombie;
}
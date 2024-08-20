/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:52:37 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/20 12:42:00 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int numZombie = 3;
    Zombie *zombie;
    
    zombie = zombieHorde(numZombie, "Multi Zombie");
    for (int i = 0; i < numZombie; i++)
    {
        std::cout << "Zombie " << i + 1 << ": " << std::endl;
        zombie[i].announce();
    }
    std::cout << std::endl;
    delete  []zombie;
}
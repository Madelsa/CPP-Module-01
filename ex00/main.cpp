/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:08:17 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/18 11:54:52 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie;
    Zombie *pZombie;
    
    zombie.announce();
    zombie.setName("Foo");
    zombie.announce();
    randomChump("random chump");
    pZombie = newZombie("pointerZombie");
    pZombie->announce();
    delete pZombie;
}
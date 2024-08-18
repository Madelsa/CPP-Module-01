/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:43:17 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/18 17:38:58 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
    std::string name;

    public:
    Zombie();
    ~Zombie();
    void setName(std::string name);
    void announce(void);      
};

Zombie* zombieHorde( int N, std::string name );


#endif
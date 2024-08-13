/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:26:33 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/13 16:22:51 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    private:
    std::string name;
    
    public:
    void announce(void);    
    void setName(std::string zombieName);
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );  
};

#endif
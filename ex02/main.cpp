/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:36:44 by mabdelsa          #+#    #+#             */
/*   Updated: 2024/08/18 17:50:37 by mabdelsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    std::string *ptName = &name;
    std::string &refName = name;
    
    std::cout << "Address of the string variable (name): " << &name << std::endl;
    std::cout << "Address held by ptName: " << ptName << std::endl;
    std::cout << "Address held by refName: " << &refName << std::endl;
}
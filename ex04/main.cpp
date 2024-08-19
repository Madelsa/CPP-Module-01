/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:29:57 by mahmoud           #+#    #+#             */
/*   Updated: 2024/08/20 00:06:46 by mahmoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceStrings(std::string &filename, std::string &s1, std::string &s2)
{
    (void)s1;
    (void)s2;
    std::ifstream fileIn(filename);
    std::string line;
    std::string fileContents;
    std::string::size_type currentPosition = 0;
    
    if (!fileIn)
    {
        std::cout << "Failed to open file " << filename << "." << std::endl;
        return ;
    }
    while(std::getline(fileIn, line))
    {
       fileContents += line; 
    }
    fileIn.close();
    while ((currentPosition = fileContents.find(s1, currentPosition)) != std::string::npos)
    {   
        fileContents.erase(currentPosition, s1.length());
        fileContents.insert(currentPosition, s2);
        currentPosition += s2.length();
    }
    std::ofstream fileOut(filename + ".replace");
    if (!fileOut)
    {
        std::cout << "Failed to create file " << filename << ".replace." << std::endl;
        return ;
    }
    fileOut << fileContents;
    fileOut.close();
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        
        if (s1.empty())
        {
            std::cout << "String1 cannot be empty." << std::endl;
        }
        replaceStrings(filename, s1, s2);
        
    }
    else
        std::cout << "Invalid input format." << std::endl;
    
}
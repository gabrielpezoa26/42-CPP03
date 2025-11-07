/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:23:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/07 09:27:21 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void log(std::string message)
{
	std::cout << message << std::endl;
}

std::string ClapTrap::getName() const
{
	return name;
}

void ClapTrap::setName(std::string given_name)
{
	name = given_name;
}

ClapTrap::ClapTrap()
{
	log("Default constructor called");
	health_points = 10;
	energy_points = 10;
	attack_dmg = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	log("Parameterized constructor called");
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	log("Copy constructor called");
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	log("DEBUG: assignment operator");
	if (this != &other)
	{
		this->name = other.getName();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	log("Default destructor called");
	
}

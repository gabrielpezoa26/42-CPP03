/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:11:55 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/25 16:25:45 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() { }

DiamondTrap::DiamondTrap(std::string given_name)
: ClapTrap(given_name + "_clap_name"), ScavTrap(given_name), FragTrap(given_name), name(given_name)
{
	log("DiamondTrap-> Parameterized constructor called");

	health_points = 100;
	energy_points = 50;
	attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
: ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
	log("DiamondTrap-> Copy constructor called");
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	log("DiamondTrap-> Copy assignment operator called");
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	log("DiamondTrap-> Default destructor called");
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is: " << this->name << std::endl;
	std::cout << "My ClapTrap name is: " << ClapTrap::name << std::endl;
}

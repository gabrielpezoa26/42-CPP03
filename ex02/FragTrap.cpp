/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:17:52 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/25 16:07:54 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string given_name) : ClapTrap(given_name)
{
	log("FragTrap-> Parameterized constructor called");
	health_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	log("FragTrap-> Copy constructor called");
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->energy_points = other.energy_points;
		this->health_points = other.health_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	log("FragTrap-> Default destructor called");
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " says: High fiveeeeeeee" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:34:51 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/12 14:52:48 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string given_name) : ClapTrap(given_name)
{
	log("ScavTrap-> Parameterized constructor called");
	health_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	log("ScavTrap-> Copy constructor called");
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	log("DEBUG: assignment operator");
	if (this != &other)
	{
		this->name = other.name;
		this->energy_points = other.energy_points;
		this->health_points = other.health_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	log("ScavTrap-> Default destructor called");
	
}

void ScavTrap::attack(const std::string& target)
{
	log("DEBUG: ScavTrap-> attack() called");
	if (isClapTrapDead() || energy_points <= 0)
	{
		log("error on attack!");
		return ;
	}
	energy_points -= 1;
	std::cout << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	log("ScavTrap is on guard keeper mode");
}

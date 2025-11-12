/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:34:51 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/11 22:44:16 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

bool ScavTrap::isScavTrapDead()
{
	if (health_points <= 0)
		return true;
	return false;
}

ScavTrap::ScavTrap(std::string given_name) : ClapTrap(given_name)
{
	log("ScavTrap-> Parameterized constructor called");
	name = given_name;
	health_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	log("ScavTrap-> Default destructor called");
	
}

void ScavTrap::attack(const std::string& target)
{
	log("DEBUG: ScavTrap-> attack() called");
	if (isScavTrapDead() || energy_points <= 0)
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

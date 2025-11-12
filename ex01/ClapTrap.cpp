/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:23:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/11 22:53:36 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void log(std::string message)
{
	std::cout << message << std::endl;
}

bool ClapTrap::isClapTrapDead()
{
	if (health_points <= 0)
		return true;
	return false;
}

ClapTrap::ClapTrap()
{
	log("ClapTrap-> Default constructor called");
	health_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string given_name)
{
	log("ClapTrap-> Parameterized constructor called");
	name = given_name;
	health_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	log("ClapTrap-> Copy constructor called");
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
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

ClapTrap::~ClapTrap()
{
	log("ClapTrap-> Default destructor called");
	
}

void ClapTrap::attack(const std::string& target)
{
	log("DEBUG: attack() called");
	if (isClapTrapDead() || energy_points <= 0)
	{
		log("error on attack!");
		return ;
	}
	energy_points -= 1;
	std::cout << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (isClapTrapDead() || amount == 0)
	{
		log("error on takeDamage!");
		return ;
	}
	log("DEBUG: takeDamage() called");
	std::cout << name << " has been damaged by " << amount << " points :((" << std::endl;
	health_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	log("DEBUG: beRepaired() called");
	if (isClapTrapDead() || energy_points <= 0)
	{
		log("error on beRepaired!");
		return ;
	}
	health_points += amount;
	energy_points--;
	std::cout << name << " has repaired " << amount << " points of health :))" << std::endl;
	std::cout << "DEBUG: health = " << health_points << std::endl;  //for eval-testing
}

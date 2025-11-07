/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:23:29 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/07 17:32:10 by gcesar-n         ###   ########.fr       */
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
	attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	log("Parameterized constructor called");
	this->name = name;
	health_points = 10;
	energy_points = 10;
	attack_damage = 0;
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
	if (isClapTrapDead() || amount != 0)
	{
		log("error on takeDamage!");
		return ;
	}
	log("DEBUG: takeDamage() called");
	std::cout << name << " has been damaged by " << amount << " points :((" << std::endl;
	this->health_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	log("DEBUG: beRepaired() called");
	if (isClapTrapDead() || energy_points <= 0 || amount > energy_points)
	{
		log("error on beRepaired!");
		return ;
	}
	energy_points -= amount;
	health_points += amount;
	std::cout << name << " has repaired " << amount << " points :))" << std::endl;
}

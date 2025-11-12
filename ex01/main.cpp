/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:23:39 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/12 14:48:35 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	log("Displaying constructors output:");
	ClapTrap a("Eddie");
	ScavTrap b("Murphy");
	log("\n\n\n");


	log("Testing ClapTrap again:");
	a.attack("Zombie");
	a.takeDamage(5);
	a.beRepaired(4);
	log("\n\n\n");


	log("Now testing ScavTrap own methods:");
	b.attack("Skull");
	b.guardGate();
	log("\n\n\n");


	log("Now testing ScavTrap inherited methods:");
	b.takeDamage(3);
	b.beRepaired(2);
	log("\n\n\n");

	log("Displaying destructors output:");
	return 0;
}

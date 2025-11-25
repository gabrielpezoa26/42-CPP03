/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:23:39 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/25 16:04:55 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	logColored("-------Displaying constructors output-------", GREEN);
	ClapTrap a("Eddie");
	ScavTrap b("Murphy");
	log("\n");


	logColored("-------Testing ClapTrap methods again-------", YELLOW);
	a.attack("Zombie");
	a.takeDamage(5);
	a.beRepaired(6);
	a.printStats();
	log("\n");


	logColored("-------Now testing ScavTrap own method-------", BLUE);
	b.attack("Skull");
	b.guardGate();
	log("\n");


	logColored("-------Now testing ScavTrap inherited methods-------", BLUE);
	b.takeDamage(5);
	b.beRepaired(6);
	b.printStats();
	log("\n");

	logColored("-------Displaying destructors output-------", RED);
	return 0;
}

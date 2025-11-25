/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:23:39 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/25 16:10:22 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	logColored("-------Displaying constructors output-------", GREEN);
	ClapTrap a("Eddie");
	DiamondTrap b("Murphy");
	log("\n");


	logColored("-------Testing ClapTrap methods again-------", YELLOW);
	a.attack("Zombie");
	a.takeDamage(1);
	a.beRepaired(2);
	a.printStats();
	log("\n");


	logColored("-------Now testing DiamondTrap own methods-------", BLUE);
	b.attack("Zombie");
	b.whoAmI();
	log("\n");


	logColored("-------Now testing DiamondTrap inherited methods-------", BLUE);
	b.takeDamage(1);
	b.beRepaired(2);
	b.printStats();
	log("\n");

	logColored("-------Displaying destructors output-------", RED);
	return 0;
}

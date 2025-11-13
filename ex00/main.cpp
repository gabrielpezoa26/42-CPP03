/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:23:39 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/12 23:28:49 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	logColored("-------Displaying constructors output-------", YELLOW);
	ClapTrap a("Alfred");
	ClapTrap b("Eddie");
	log("\n\n");


	logColored("-------Testing valid values on ClapTrap 'a'-------", GREEN);
	a.attack("zombie");
	a.takeDamage(3);
	a.beRepaired(2);
	log("\n\n");


	logColored("-------Testing invalid values on ClapTrap 'b'-------", RED);
	b.attack("zombie");
	b.takeDamage(0);
	b.beRepaired(11);
	log("\n\n");


	logColored("-------Displaying destructors output-------", YELLOW);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:23:39 by gcesar-n          #+#    #+#             */
/*   Updated: 2025/11/10 08:59:53 by gcesar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Alfred");
	ClapTrap b("Eddie");


	log("Testing valid values on ClapTrap 'a'");
	a.attack("zombie");
	a.takeDamage(3);
	a.beRepaired(2);
	log("\n\n\n");


	log("Testing invalid values on ClapTrap 'b'");
	b.attack("zombie");
	b.takeDamage(0);
	b.beRepaired(11);

	return 0;
}

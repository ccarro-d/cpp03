/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:41:46 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/14 18:05:58 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

void	checkChaining(void)
{
	DiamondTrap testChaining("Test Chaining");
}

int	main(void)
{
	checkChaining();
	std::cout << std::endl;
	
	DiamondTrap	newMainCharacter("MainCharacter");
	newMainCharacter.checkStatus();
		
	newMainCharacter.attack("enemy");
	newMainCharacter.checkStatus();
	
	newMainCharacter.takeDamage(99);
	newMainCharacter.checkStatus();

	newMainCharacter.whoAmI();
	std::cout << std::endl;
	
	DiamondTrap	otherCharacter(newMainCharacter);
	otherCharacter.setName("OtherCharacter");
	newMainCharacter.beRepaired(50);
	newMainCharacter.checkStatus();
	otherCharacter.checkStatus();

	DiamondTrap anotherCharacter;
	anotherCharacter = newMainCharacter;
	anotherCharacter.setName("AnotherCharacter");
	anotherCharacter.checkStatus();
	newMainCharacter.beRepaired(50);
	newMainCharacter.checkStatus();
	anotherCharacter.checkStatus();

	return (0);
}
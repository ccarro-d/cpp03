/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:41:46 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/14 13:01:50 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

void	checkChaining(void)
{
	ScavTrap testChaining("Test Chaining");
}

int	main(void)
{
	checkChaining();
	std::cout << std::endl;
	
	ScavTrap	newMainCharacter("MainCharacter");
	newMainCharacter.checkStatus();
	
	newMainCharacter.guardGate();
	
	newMainCharacter.attack("enemy");
	newMainCharacter.checkStatus();
	
	newMainCharacter.takeDamage(99);
	newMainCharacter.checkStatus();
	
	ScavTrap	otherCharacter(newMainCharacter);
	otherCharacter.setName("OtherCharacter");
	newMainCharacter.beRepaired(50);
	newMainCharacter.checkStatus();
	otherCharacter.checkStatus();

	ScavTrap anotherCharacter;
	anotherCharacter = newMainCharacter;
	anotherCharacter.setName("AnotherCharacter");
	anotherCharacter.checkStatus();
	newMainCharacter.beRepaired(50);
	newMainCharacter.checkStatus();
	anotherCharacter.checkStatus();

	return (0);
}
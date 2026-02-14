/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:41:46 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/14 13:22:48 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

void	checkChaining(void)
{
	FragTrap testChaining("Test Chaining");
}

int	main(void)
{
	checkChaining();
	std::cout << std::endl;
	
	FragTrap	newMainCharacter("MainCharacter");
	newMainCharacter.checkStatus();
	
	newMainCharacter.highFivesGuys();
	
	newMainCharacter.attack("enemy");
	newMainCharacter.checkStatus();
	
	newMainCharacter.takeDamage(99);
	newMainCharacter.checkStatus();
	
	FragTrap	otherCharacter(newMainCharacter);
	otherCharacter.setName("OtherCharacter");
	newMainCharacter.beRepaired(50);
	newMainCharacter.checkStatus();
	otherCharacter.checkStatus();

	FragTrap anotherCharacter;
	anotherCharacter = newMainCharacter;
	anotherCharacter.setName("AnotherCharacter");
	anotherCharacter.checkStatus();
	newMainCharacter.beRepaired(50);
	newMainCharacter.checkStatus();
	anotherCharacter.checkStatus();

	return (0);
}
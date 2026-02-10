/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:41:46 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/10 01:10:06 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	mainCharacter("Jacinto");
	mainCharacter.checkStatus();
	
	mainCharacter.attack("enemy");
	mainCharacter.checkStatus();
	
	mainCharacter.takeDamage(2);
	mainCharacter.checkStatus();
	
	mainCharacter.beRepaired(2);
	mainCharacter.checkStatus();

	return (0);
}
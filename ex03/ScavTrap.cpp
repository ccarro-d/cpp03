/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:24:19 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/14 13:11:25 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

// CONSTRUCTORS & DESTRUCTOR

ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
	std::cout << "Unnamed ScavTrap class object was created" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
	std::cout << "ScavTrap class object called \"" << name_ << "\" was created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap class object called \"" << name_ << "\" was copied from another object of the same class called \"" << other.name_ << "\"" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap class object called \"" << name_ << "\" was destroyed" << std::endl;

}

// OPERATOR

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap \"" << this->name_  << "\" assigned from \"" << other.name_ << "\" (operator=)" << std::endl; // No se pide, solo para testear en el main
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

// MEMBER FUNCTIONS

void	ScavTrap::attack(const std::string& target)
{
	if (hitPoints_ == 0)
	{
		std::cout << "ScavTrap " << name_ << " has no health points left" << std::endl;
		return;
	}
	if (energyPoints_ == 0)
	{
		std::cout << "ScavTrap " << name_ << " has no energy points left" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
	energyPoints_ -= 1;
}


void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name_ << " is now in Gatekeeper mode" << std::endl;
}

// GETTERS
/*
const std::string&	ScavTrap::getName() const
{
	return (name_);
}

unsigned int	ScavTrap::getHitPoints() const
{
	return (hitPoints_);
}

unsigned int	ScavTrap::getEnergyPoints() const
{
	return (energyPoints_);
}

unsigned int	ScavTrap::getAttackDamage() const
{
	return (attackDamage_);
}
*/
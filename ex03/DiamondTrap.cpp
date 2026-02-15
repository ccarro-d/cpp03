/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:24:19 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/15 19:49:31 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

// CONSTRUCTORS & DESTRUCTOR

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), name_("unnamed")
{
	hitPoints_ = 100; // No haría falta porque tanto ScavTrap como FragTrap inicializan a 100
	energyPoints_ = 50; // Este valor se pisa porque FragTrap se crea después de ScavTrap y lo modifica
	attackDamage_ = 30; // Este valor en principio se mantiene porque FragTrap se crea después de ScavTrap, pero por evitar problemas
	std::cout << "Unnamed DiamondTrap class object was created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name_(name)
{
	hitPoints_ = 100; // No haría falta porque tanto ScavTrap como FragTrap inicializan a 100
	energyPoints_ = 50; // Este valor se pisa porque FragTrap se crea después de ScavTrap y lo modifica
	attackDamage_ = 30; // Este valor en principio se mantiene porque FragTrap se crea después de ScavTrap, pero por evitar problemas
	std::cout << "DiamondTrap class object called \"" << name_ << "\" was created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), name_(other.name_)
{
	std::cout << "DiamondTrap class object called \"" << name_ << "\" was copied from another object of the same class called \"" << other.name_ << "\"" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap class object called \"" << name_ << "\" was destroyed" << std::endl;

}

// OPERATOR

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap \"" << this->name_  << "\" assigned from \"" << other.name_ << "\" (operator=)" << std::endl; // No se pide, solo para testear en el main
	if (this != &other)
	{
		ClapTrap::operator=(other);
		name_ = other.name_;
	}
	return (*this);
}

// MEMBER FUNCTIONS

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}


void	DiamondTrap::whoAmI()
{
	std::cout << "Who am I?" << std::endl;
	std::cout << " - DiamondTrap name: " << name_ << std::endl;
	std::cout << " - ClapTrap    name: " << ClapTrap::name_ << std::endl;
}

void	DiamondTrap::checkStatus() const
{
	std::cout << "Character " << name_ << " has:" << std::endl;
	std::cout << "	- " << hitPoints_ << " health points" << std::endl;
	std::cout << "	- " << energyPoints_ << " energy points" << std::endl;
	std::cout << "	- " << attackDamage_ << " damage points" << std::endl;
	std::cout << std::endl;
}

// GETTERS
/*
const std::string&	DiamondTrap::getName() const
{
	return (name_);
}

unsigned int	DiamondTrap::getHitPoints() const
{
	return (hitPoints_);
}

unsigned int	DiamondTrap::getEnergyPoints() const
{
	return (energyPoints_);
}

unsigned int	DiamondTrap::getAttackDamage() const
{
	return (attackDamage_);
}
*/

void	DiamondTrap::setName(const std::string& newName) // Solo para testing y debugging en el main()
{
	std::cout << "DiamondTrap named " << name_ << " was renamed to " << newName << std::endl;
	ClapTrap::setName(newName + "_clap_name");
	name_ = newName;
	
}

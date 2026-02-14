/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:24:19 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/14 18:07:06 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

// CONSTRUCTORS & DESTRUCTOR

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	hitPoints_ = FragTrap::hitPoints_;
	energyPoints_ = ScavTrap::energyPoints_;
	attackDamage_ = FragTrap::attackDamage_;
	std::cout << "Unnamed DiamondTrap class object was created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	hitPoints_ = FragTrap::hitPoints_;
	energyPoints_ = ScavTrap::energyPoints_;
	attackDamage_ = FragTrap::attackDamage_;
	std::cout << "DiamondTrap class object called \"" << name_ << "\" was created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
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
		ClapTrap::operator=(other);
	return (*this);
}

// MEMBER FUNCTIONS

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}


void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << name_ << std::endl;
	std::cout << "ClapTrap    name: " << ClapTrap::name_ << std::endl;
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
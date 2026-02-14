/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:24:19 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/14 13:28:15 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

// CONSTRUCTORS & DESTRUCTOR

FragTrap::FragTrap() : ClapTrap()
{
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDamage_ = 30;
	std::cout << "Unnamed FragTrap class object was created" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDamage_ = 30;
	std::cout << "FragTrap class object called \"" << name_ << "\" was created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap class object called \"" << name_ << "\" was copied from another object of the same class called \"" << other.name_ << "\"" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap class object called \"" << name_ << "\" was destroyed" << std::endl;

}

// OPERATOR

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap \"" << this->name_  << "\" assigned from \"" << other.name_ << "\" (operator=)" << std::endl; // No se pide, solo para testear en el main
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

// MEMBER FUNCTIONS

void	FragTrap::attack(const std::string& target)
{
	if (hitPoints_ == 0)
	{
		std::cout << "FragTrap " << name_ << " has no health points left" << std::endl;
		return;
	}
	if (energyPoints_ == 0)
	{
		std::cout << "FragTrap " << name_ << " has no energy points left" << std::endl;
		return;
	}
	std::cout << "FragTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
	energyPoints_ -= 1;
}


void	FragTrap::highFivesGuys()
{
	std::cout << "Positive high-fives request made by FragTrap " << name_ << std::endl;
}

// GETTERS
/*
const std::string&	FragTrap::getName() const
{
	return (name_);
}

unsigned int	FragTrap::getHitPoints() const
{
	return (hitPoints_);
}

unsigned int	FragTrap::getEnergyPoints() const
{
	return (energyPoints_);
}

unsigned int	FragTrap::getAttackDamage() const
{
	return (attackDamage_);
}
*/
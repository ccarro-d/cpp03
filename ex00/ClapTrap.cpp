/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:24:19 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/10 02:00:15 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <climits>

// CONSTRUCTORS & DESTRUCTOR

ClapTrap::ClapTrap() : name_("unnamed"), hitPoints_(10), energyPoints_(10), attackDamage_(0)
{
	std::cout << "Unnamed ClapTrap class object was created" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0)
{
	std::cout << "ClapTrap class object called \"" << name_ << "\" was created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name_(other.name_), hitPoints_(other.hitPoints_), energyPoints_(other.energyPoints_), attackDamage_(other.attackDamage_)
{
	std::cout << "ClapTrap class object called \"" << name_ << "\" was copied from another object of the same class called \"" << other.name_ << "\"" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap class object called \"" << name_ << "\" was destroyed" << std::endl;

}

// OPERATOR

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		name_ = other.name_;
		hitPoints_ = other.hitPoints_;
		energyPoints_ = other.energyPoints_;
		attackDamage_ = other.attackDamage_;
	}
	return (*this);
}

// MEMBER FUNCTIONS

void	ClapTrap::attack(const std::string& target)
{
	if (hitPoints_ == 0)
	{
		std::cout << "ClapTrap " << name_ << " doesn't have health points enough to perform this operation" << std::endl;
		return;
	}
	if (energyPoints_ == 0)
	{
		std::cout << "ClapTrap " << name_ << " doesn't have energy points enough to perform this operation" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
	energyPoints_ -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints_ == 0)
	{
		std::cout << name_ << " is already dead" << std::endl;
		return ;
	}
	if (hitPoints_ < amount)
		amount = hitPoints_;
	std::cout << "ClapTrap " << name_ << " was attacked, causing " << amount << " points of damage!" << std::endl;
	hitPoints_ -= amount;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints_ == 0)
	{
		std::cout << "ClapTrap " << name_ << " doesn't have health points enough to perform this operation" << std::endl;
		return;
	}
	if (energyPoints_ == 0)
	{
		std::cout << "ClapTrap " << name_ << " doesn't have energy points enough to perform this operation" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name_ << " was repaired, obtaining " << amount << " points of health!" << std::endl;
	if (UINT_MAX - hitPoints_ <= amount)
		hitPoints_ = UINT_MAX;
	else
		hitPoints_ += amount;
	energyPoints_ -= 1;
}

void	ClapTrap::checkStatus() const
{
	std::cout << "Character " << name_ << " has:" << std::endl;
	std::cout << "	- " << hitPoints_ << " health points" << std::endl;
	std::cout << "	- " << energyPoints_ << " energy points" << std::endl;
	std::cout << "	- " << attackDamage_ << " damage points" << std::endl;
	std::cout << std::endl;
}

// GETTERS
/*
const std::string&	ClapTrap::getName() const
{
	return (name_);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (hitPoints_);
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return (energyPoints_);
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return (attackDamage_);
}
*/
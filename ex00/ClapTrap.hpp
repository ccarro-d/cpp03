/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:17:08 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/02/10 01:59:56 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	private:
		std::string		name_;
		unsigned int	hitPoints_; // Health
		unsigned int	energyPoints_; //Energy
		unsigned int	attackDamage_;

	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();

		ClapTrap&	operator=(const ClapTrap& other);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	checkStatus() const; // No lo pide el subject, solo por printear cambios de estado

		//No hacen falta
		/*const std::string&		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;*/
	};
	
#endif
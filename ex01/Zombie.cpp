/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:19:00 by jgo               #+#    #+#             */
/*   Updated: 2023/05/08 20:35:46 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

const std::string Zombie::kAnnounce = "BraiiiiiiinnnzzzZ...";

Zombie::Zombie() {}

Zombie::Zombie(std::string name) {
	this->name_ = name;
	this->announce();
}

Zombie::~Zombie() {
	std::cout << this->name_ << ": "
			  << "dying..." << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->name_ << ": " << kAnnounce << std::endl;
}

void Zombie::setName(std::string name) {
	this->name_ = name;
	this->announce();
}
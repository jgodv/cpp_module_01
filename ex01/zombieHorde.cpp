/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:52:35 by jgo               #+#    #+#             */
/*   Updated: 2023/05/08 20:24:49 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* ZombieArr;

	std::cout << "zombieHorde func called" << std::endl;
	try {
		ZombieArr = new Zombie[N];
		for (int i = 0; i < N; i++)
			ZombieArr[i].setName(name);
	} catch (const std::bad_alloc& e) {
		std::cerr << e.what() << '\n';
		if (ZombieArr != NULL)
			delete[] ZombieArr;
		return (NULL);
	}
	return (ZombieArr);
}
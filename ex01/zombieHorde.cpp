/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:52:35 by jgo               #+#    #+#             */
/*   Updated: 2023/04/25 22:19:56 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	Zombie *ZombieArr;

	try {
		ZombieArr = new Zombie[N];
		for (int i = 0; i < N; i++)
			ZombieArr[i].setName(name);
	} catch (const std::bad_alloc &e) {
		std::cerr << e.what() << '\n';
		return (NULL);
	}
	return (ZombieArr);
}
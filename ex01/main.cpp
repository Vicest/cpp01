/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:04:36 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/07 18:04:37 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name);

int	main(void)
{
	Zombie	*zombo_leader;
	int		size;

	size = 4;
	zombo_leader = zombieHorde(size, "Test");
	for (int i = 0; i < size; i++)
		zombo_leader[i].announce();
	delete [] zombo_leader;
	size = -1;
	zombo_leader = zombieHorde(size, "The thing that should not be");
	for (int i = 0; i < size; i++)
		zombo_leader[i].announce();
	delete [] zombo_leader;
	size = 12;
	zombo_leader = zombieHorde(size, "Cemetery ambush");
	for (int i = 0; i < size; i++)
		zombo_leader[i].announce();
	delete [] zombo_leader;
	return (101);
}

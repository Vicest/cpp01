/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:02:34 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/07 18:02:36 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string);

int	main(void)
{
	Zombie	*meatbag = newZombie("Stayin' alive");

	randomChump("Gary, the transient zombie");
	meatbag->announce();
	randomChump("Brainiac");
	meatbag->announce();
	randomChump("Brians");
	delete meatbag;
	randomChump("The last one");
	return (42);
}

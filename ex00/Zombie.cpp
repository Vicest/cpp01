/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:02:08 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/07 18:02:11 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name){}

Zombie::~Zombie(void)
{
	std::cout << this->_name
		<< " finally rests in (delicious) peas." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name
		<< "> BraiiiiiiinnnzzzZ..." << std::endl;
}

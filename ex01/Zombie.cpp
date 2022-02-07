/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:12:16 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/07 16:12:24 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : _name("Anon"){}

Zombie::Zombie(std::string name) : _name(name){}

Zombie::~Zombie(void)
{
	std::cout << this->_name
		<< " finally rests in (delicious) peas." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name
		<< "> BraiiiiiiinnnzzzZ..." << std::endl;
}

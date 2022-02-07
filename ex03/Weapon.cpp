/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:06:39 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/07 17:40:52 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name){}

Weapon::~Weapon(void){}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}

std::string	Weapon::getType(void) const
{
	return (this->_type);
}

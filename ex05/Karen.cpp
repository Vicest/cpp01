/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:31:44 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/08 23:08:30 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(void)
{
	//std::cout << "I'asdfasdfdffor now." << std::endl;
	this->say = &Karen::debug;
	//std::cout << "I'm useless llooool." << std::endl;
}

Karen::~Karen(void){}

void	Karen::complain(std::string level) const
{
	std::cout << "[ " << level << " ]" << std::endl;
	std::cout << "I'm useless for now." << std::endl;
}

void	Karen::debug(void) const
{
	std::cout << "Debug message" << std::endl;
}

void	Karen::info(void) const
{
	std::cout << "Info msg" << std::endl;
}

void	Karen::warning(void) const
{
	std::cout << "WARN message" << std::endl;
}

void	Karen::error(void) const
{
	std::cout << "ERR message" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:31:44 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/09 17:18:30 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(void) {}

Karen::~Karen(void){}

int	Karen::indexize_level(std::string level) const
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			size = sizeof(levels) / sizeof(std::string);
	int			index = 0;

	while (index < size && level.compare(levels[index]) != 0)
		index++;
	if (index == size)
		index = -1;
	return (index);
}

void	Karen::complain(std::string level) const
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	SayPtr		say[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int			level_num = Karen::indexize_level(level);

	switch (level_num)
	{
		case 0:
			std::cout << "[ " << levels[0] << " ]" << std::endl;
			(this->*(say[0]))();
		case 1:
			std::cout << "[ " << levels[1] << " ]" << std::endl;
			(this->*(say[1]))();
		case 2:
			std::cout << "[ " << levels[2] << " ]" << std::endl;
			(this->*(say[2]))();
		case 3:
			std::cout << "[ " << levels[3] << " ]" << std::endl;
			(this->*(say[3]))();
			break ;
		default:
			std::cout << "[ Staring at the sofa ]" << std::endl;
	}
}

void	Karen::debug(void) const
{
	std::cout << "It's 3:53AM, I'm a cat with nocturnal behavior." << std::endl
		<< "I've been playing with the wool ball, I'm hungry now." << std::endl
		<< "I'll go find the food bowl." << std::endl;
}

void	Karen::info(void) const
{
	std::cout << "Meow! I just decided it's food time." << std::endl;
}

void	Karen::warning(void) const
{
	std::cout << "Food bowl is empty. Human is sleeping." << std::endl
		<< "Sit on human face protocol engaged." << std::endl;
}

void	Karen::error(void) const
{
	std::cout << "I demand food, human! *SCRATCHES FACE*" << std::endl;
}

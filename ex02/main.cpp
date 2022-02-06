/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:53:25 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/06 18:02:17 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address." << std::endl
		<< "string: " << &string << std::endl
		<< "stringPTR: " << stringPTR << std::endl
		<< "stringREF: " << &stringREF << std::endl
		<< "Content." << std::endl
		<< "string: " << string << std::endl
		<< "stringPTR: " << *stringPTR << std::endl
		<< "stringREF: " << stringREF << std::endl;
	return (0);
}

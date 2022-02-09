/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:43:08 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/09 17:20:03 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	int		i = 1;
	Karen	charito;

	while (i < argc)
	{
		charito.complain(argv[i++]);
		std::cout << "--------------------------------------" << std::endl;
	}
	return (argc);
}

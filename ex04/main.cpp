/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:03:04 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/07 21:03:18 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static std::string	replace(std::string src, std::string ref, std::string subst)
{
	std::string::size_type	start_pos = 0;
	std::string::size_type	end_pos;
	std::string				dst;

	while (src.find(ref, end_pos))
	{
		dst.append(src, start_pos, end_pos - start_pos);
		start_pos = end_pos;
		dst.append(subst);
	}
	dst.append(src[end_pos]);
	return (dst);
}

int main(int argc, char **argv)
{
	std::string		filename;
	std::string		line;
	std::ifstream	readf;
	std::ofstream	writef;

	if (argc != 4)
	{
		std::cerr << "Parameters: file search_str susbtitute_str" << std::endl;
		return (1);
	}
	filename = argv[1];
	readf.open(filename, std::fstream::out);
	writef.open(filename.append(".replace"), std::fstream::in | std::fstream::trunc);
	if (!readf.is_open() || !writef.is_open())
	{
		std::cerr << "Error ocurred while opening files." << std::endl;
		return (1);
	}
	readf.close();
	writef.close();
	return (0);
}

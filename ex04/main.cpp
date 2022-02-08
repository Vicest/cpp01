/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:03:04 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/08 22:00:07 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <limits>
#include <iostream>
#include <fstream>

static std::string	replace(std::string src, std::string ref, std::string subst)
{
	std::string::size_type	start_pos = 0;
	std::string::size_type	end_pos = 0;
	std::string				dst;

	end_pos = src.find(ref, start_pos);
	while (end_pos != std::string::npos)
	{
		dst.append(src, start_pos, end_pos - start_pos);
		start_pos = end_pos + ref.size();
		dst.append(subst);
		end_pos = src.find(ref, start_pos);
	}
	dst.append(src, start_pos);
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
	if (strcmp(argv[2], "") == 0)
	{
		std::cerr << "First string should not be empty." << std::endl;
		return (1);
	} else
		while (getline(readf, line, '\n').good())
			writef << replace(line, argv[2], argv[3]) << std::endl;
	readf.close();
	writef.close();
	return (0);
}

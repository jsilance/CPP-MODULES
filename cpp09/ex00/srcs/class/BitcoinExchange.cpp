/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:09:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/07 14:00:23 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &	BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	if (this != &rhs)
	{
	}
	return (*this);
}

void BitcoinExchange::printLine(std::string line)
{
	std::cout << line << std::endl;
}

void BitcoinExchange::printError(std::string line, int lineNb)
{
	std::cout << "Error: line " << lineNb << " is not valid" << std::endl;
}

void BitcoinExchange::printResult(std::string line, int lineNb)
{
	for (std::map<std::string, double>::iterator it = _map.begin(); it != _map.end(); it++)
		std::cout << it->first << " => " << it->second << '\n';
}

int BitcoinExchange::lineVerifier(std::string str)
{
	return (0);
}

void BitcoinExchange::insertInMap(std::string line)
{
	std::string date = line.substr(0, 10);
	std::string value = line.substr(11, line.length() - 10);

	_map.insert(std::pair<std::string, double>(date, std::atof(value.c_str())));
}

void BitcoinExchange::readFile(std::string filename)
{
	std::ifstream	file(filename);
	std::string		line;
	int				lineNb = 0;

	if (!file.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return ;
	}
	while (std::getline(file, line))
	{
		if (line == "date,exchange_rate")
			continue ;
		lineNb++;
		if (lineVerifier(line))
			printError(line, lineNb);
		else
			insertInMap(line);
	}
	// printResult(line, lineNb);
}
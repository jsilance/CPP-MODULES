/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:09:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/19 03:07:06 by jusilanc         ###   ########.fr       */
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
	std::cerr << "Error: line " << lineNb + 1 << " is not valid" << std::endl;
}

void BitcoinExchange::printResult(std::string line, int lineNb)
{
	for (std::map<std::string, std::string>::iterator it = _map.begin(); it != _map.end(); it++)
		std::cout << it->first << " => " << it->second << '\n';
}

void BitcoinExchange::lineVerifier(std::string str)
{
	std::istringstream ss(str);
	std::string date, value, year, month, day;

	std::getline(ss, date, '|');
	std::getline(ss, value);
		
	ss = std::istringstream(date);

	getline(ss, year, '-');
	getline(ss, month, '-');
	getline(ss, day);

	if (day[2] == ' ')
		day[2] = '\0';

	// std::cout << "date: " << date << '\n';
	// std::cout << "value: " << value << '\n';
	// std::cout << "year: " << year.size() << " month: " << month.size() << " day: |" << day.size() << "|\n";

	if (year.size() != 4 || month.size() != 2 || (day.size() != 3 && day[2] == ' '))
		throw FormatException();
	if (year[0] != '2' || year[1] != '0')
		throw BadInputException();
	if (month > "12" || month < "01")
		throw BadInputException();
	if (day > "31" || day < "01")
		throw BadInputException();
	if (atoi(year.c_str()) % 4 != 0 && month == "02" && day >= "29")
		throw BadInputException();
	if (atof(value.c_str()) < 0)
		throw NotPositiveException();
	if(atof(value.c_str()) > 1000)
		throw TooLargeException();
}

void BitcoinExchange::insertInMap(std::string line)
{
	std::istringstream ss(line);
	std::string date, value;

	getline(ss, date, ',');
	getline(ss, value);

	_map.insert(std::pair<std::string, std::string>(date, value));
}

void BitcoinExchange::exchange(std::string line)
{
	try
	{
		// std::cout << "line: " << line << '\n';
		lineVerifier(line);
		std::istringstream ss(line);
		std::string date, value;

		getline(ss, date, '|');
		getline(ss, value);

		std::map<std::string, std::string>::iterator it = _map.find(date);

		if (it == _map.end())
			throw BadInputException();

		std::cout << date << " => " << it->second.c_str() << " | " << value << '\n';
		// std::cout << date << " => " << it->second * atof(value.c_str()) << '\n';
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void BitcoinExchange::readFile(std::string filename, std::string input)
{
	std::ifstream	file(filename);
	std::ifstream	infile(input);
	std::string		line;
	std::string		line2;
	int				lineNb = 0;

	if (!file.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return ;
	}
	while (getline(file, line))
	{
		if (line == "date,exchange_rate")
			continue ;
		insertInMap(line);
	}
	while (getline(infile, line2))
	{
		if (line2 == "date | value")
			continue ;
		lineNb++;
		exchange(line2);
	}
}
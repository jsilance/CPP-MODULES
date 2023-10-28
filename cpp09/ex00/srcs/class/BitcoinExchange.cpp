/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:09:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/28 16:34:43 by jusilanc         ###   ########.fr       */
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
	for (std::map<int, std::string>::iterator it = _map.begin(); it != _map.end(); it++)
		std::cout << it->first << " => " << it->second << '\n';
}

void BitcoinExchange::lineVerifier(std::string str)
{
	std::istringstream ss(str);
	std::string date, value, year, month, day;

	std::getline(ss, date, '|');
	std::getline(ss, value);
		
	std::istringstream ss1(date);

	getline(ss1, year, '-');
	getline(ss1, month, '-');
	getline(ss1, day);

	if (day[2] == ' ')
		day[2] = '\0';

	if (year.size() != 4 || month.size() != 2 || (day.size() != 3 && day[2] == ' '))
		throw FormatException();
	if (year[0] != '2' || year[1] != '0')
		throw BadInputException(date);
	if (month > "12" || month < "01")
		throw BadInputException(date);
	if (day > "31" || day < "01")
		throw BadInputException(date);
	if (((atoi(year.c_str()) % 100 == 0 && atoi(year.c_str()) % 400 != 0) || atoi(year.c_str()) % 4 != 0) && month == "02" && day >= "29")
		throw BadInputException(date);
	if (atof(value.c_str()) < 0)
		throw NotPositiveException();
	if(atof(value.c_str()) > 1000)
		throw TooLargeException();
}

int BitcoinExchange::dateToInt(std::string str)
{
	int result = 0;

	std::istringstream ss(str);
	std::string year, month, day;

	getline(ss, year, '-');
	getline(ss, month, '-');
	getline(ss, day);

	result += atoi(year.c_str()) * 10000;
	result += atoi(month.c_str()) * 100;
	result += atoi(day.c_str());

	return (result);
}

void BitcoinExchange::insertInMap(std::string line)
{
	std::istringstream ss(line);
	std::string date, value;

	getline(ss, date, ',');
	getline(ss, value);

	_map.insert(std::pair<int, std::string>(dateToInt(date), value));
}

std::map<int, std::string>::iterator BitcoinExchange::findInMap(std::string date)
{
	std::map<int, std::string>::iterator it = _map.begin();
	std::map<int, std::string>::iterator ito = it;

	int iDate = dateToInt(date);

	for (it = _map.begin(); it != _map.end() && it->first <= iDate; it++)
	{
		if (it->first == iDate)
			return (it);
		if (it->first >= iDate)
			break ;
		ito = it;
	}
	return (ito);
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

		std::map<int, std::string>::iterator it = findInMap(date);

		// std::cout << date << " => " << it->second.c_str() << " | " << value << '\n';
		std::cout << date << "=>" << value << " = " << atof(it->second.c_str()) * atof(value.c_str()) << '\n';
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
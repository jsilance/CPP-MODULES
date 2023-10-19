/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:57:23 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/19 02:53:12 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <vector>
# include <cstdlib>
# include <string>
# include <fstream>
# include <sstream>
# include <iomanip>

class BitcoinExchange
{
	private:
		std::map<std::string, std::string> _map;

		BitcoinExchange(BitcoinExchange const & src);
		BitcoinExchange &	operator=(BitcoinExchange const & rhs);

	public:
		BitcoinExchange();
		~BitcoinExchange();

		void		readFile(std::string filename, std::string infile);
		void 		parseLine(std::string line);
		void		insertInMap(std::string line);
		void		lineVerifier(std::string str);
		void		printLine(std::string line);
		void		printError(std::string line, int lineNb);
		void		printResult(std::string line, int lineNb);

		void		exchange(std::string line);

		class NotPositiveException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: not a positive number.");
				}
		};

		class BadInputException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: bad input");
				}
		};

		class TooLargeException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: too large a number");
				}
		};

		class FormatException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: bad format");
				}
		};
};

#endif
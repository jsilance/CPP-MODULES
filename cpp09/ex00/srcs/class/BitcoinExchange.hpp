/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:57:23 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/25 23:19:48 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <cstdlib>
# include <string>
# include <fstream>
# include <sstream>
# include <iomanip>

class BitcoinExchange
{
	private:
		std::map<int, std::string> _map;

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
		std::map<int, std::string>::iterator		findInMap(std::string date);
		int			dateToInt(std::string date);

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
				BadInputException(const std::string& msg) : _str("Error: bad input => " + msg){}
				~BadInputException() throw() {}
				virtual const char* what() const throw()
				{
					return (_str.c_str());
				}
			private:
				std::string _str;
		};

		class TooLargeException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: too large a number.");
				}
		};

		class FormatException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: bad format.");
				}
		};
};

#endif
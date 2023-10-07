/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:57:23 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/07 13:14:41 by jusilanc         ###   ########.fr       */
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
		std::map<std::string, double> _map;

		BitcoinExchange(BitcoinExchange const & src);
		BitcoinExchange &	operator=(BitcoinExchange const & rhs);

	public:
		BitcoinExchange();
		~BitcoinExchange();

		void		readFile(std::string filename);
		void 		parseLine(std::string line);
		void		insertInMap(std::string line);
		int			lineVerifier(std::string str);
		void		printLine(std::string line);
		void		printError(std::string line, int lineNb);
		void		printResult(std::string line, int lineNb);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:52:39 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/21 19:25:22 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int ac, char **ag)
{
	std::string line;
	std::string infile;
	std::string outfile;

	if (ac != 4)
		return (1);
	
	infile = ag[1];
	outfile = infile;
	outfile.append(".replace");

	std::ifstream ifs(infile);
	std::ofstream ofs(outfile);

	while (std::getline(ifs, line))
		ofs << line << std::endl;
	ifs.close();
	ofs.close();
	return (0);
}

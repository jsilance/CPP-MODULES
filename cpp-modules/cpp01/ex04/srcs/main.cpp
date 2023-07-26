/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:52:39 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/26 19:42:21 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int ac, char **ag)
{
	std::string line;
	std::string infile;
	std::string outfile;
	std::string str_to_replace;
	int j = 0;

	if (ac != 4)
		return (1);
	
	infile = ag[1];
	str_to_replace = std::string(ag[2]);

	outfile = infile;
	outfile.append(".replace");

	std::ifstream ifs(infile);
	std::ofstream ofs(outfile);

	while (std::getline(ifs, line))
	{
		for (int i = 0; i < line.size(); i++)
		{
			j = 0;
			if (line[i] == str_to_replace[j])
			{
				while (j < str_to_replace.size() && line[i + j] == str_to_replace[j])
					j++;
				if (j == str_to_replace.size())
				{
					ofs << ag[3];
					i += j;
				}
				else
					ofs << line[i];
			}
			else
				ofs << line[i];
		}
		ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}

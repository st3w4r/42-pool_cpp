/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 19:35:41 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 19:35:42 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void startReplace(std::string fileName, std::string s1, std::string s2)
{
	std::ifstream ifs(fileName);
	if (!ifs)
	{
		std::cerr << "Error open file" << std::endl;
		exit(1);
	}

	std::ofstream ofs((fileName + ".replace"));
	if (!ofs)
	{
		std::cerr << "Error create file" << std::endl;
		exit(1);
	}

	std::string::size_type size;
	std::string strTmp;
	while (std::getline(ifs, strTmp))
	{
		if ((size = strTmp.find(s1)) != std::string::npos )
			strTmp.replace(strTmp.find(s1), s2.length(), s2);
		ofs << strTmp << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Need two arguments" << std::endl;
		exit(1);
	}

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	startReplace(filename, s1, s2);
	return (0);
}
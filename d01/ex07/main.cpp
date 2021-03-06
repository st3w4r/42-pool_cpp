/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 19:35:41 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/17 19:28:16 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void startReplace(std::string fileName, std::string s1, std::string s2)
{
	if (s1.length() <= 0 || s2.length() <= 0)
	{
		std::cerr << "String is empty" << std::endl;
		exit(1);
	}

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

	std::string::size_type pos;
	std::string strTmp;
	while (std::getline(ifs, strTmp))
	{
		size_t posStart = 0;
		while ((pos = strTmp.find(s1, posStart)) != std::string::npos)
		{
			strTmp.erase(pos, s1.length());
			strTmp.insert(pos, s2);
			posStart = pos + s2.length();
		}
		ofs << strTmp << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: filename StringFind StringReplace" << std::endl;
		exit(1);
	}

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	startReplace(filename, s1, s2);
	return (0);
}

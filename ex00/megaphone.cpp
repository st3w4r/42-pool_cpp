/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 15:39:23 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/15 15:39:25 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	ft_isalpha_min(char c)
{
	if (c >= 97 && c <= 122)
		return (true);
	return (false);
}

void	ft_str_toupper(char *str)
{
	while (str && *str)
	{
		if (ft_isalpha_min(*str))
			std::cout << (char)(*str - 32);
		else
			std::cout << (char)(*str);
		++str;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_str_toupper(argv[i]);
			++i;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}

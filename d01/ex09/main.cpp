/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 22:07:06 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/17 22:07:08 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void)
{
	Logger logger;

	logger.log("console", "Download File");
	logger.log("file", "Download File 2");
	logger.log("console", "Delete File Yes");
	logger.log("file", "Delete File Yes 2");
	return (0);
}

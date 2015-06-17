/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 22:07:01 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/17 22:07:02 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>

class Logger {

	private:
		std::string	timestamp(void);
		void logToConsole(std::string const msg);
		void logToFile(std::string const msg);
		std::string makeLogEntry(std::string const & msg);
	public:
		void log(std::string const & dest, std::string const & message);
};

#endif /* end of include guard: LOGGER_HPP */

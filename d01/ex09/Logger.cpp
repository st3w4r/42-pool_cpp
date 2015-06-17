/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 22:06:54 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/17 22:06:54 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

std::string	Logger::timestamp(void)
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];

	time (&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer,80,"%d-%m-%Y %I:%M:%S",timeinfo);
	std::string msg(buffer);
	return (msg);
}

void Logger::logToConsole(std::string const msg)
{
	std::cout << msg << std::endl;
}

void Logger::logToFile(std::string const msg)
{
	std::ofstream ofs("log", std::ios_base::app);
	if (!ofs)
	{
		std::cerr << "Error create file" << std::endl;
		exit(1);
	}
	ofs << msg << std::endl;
}

std::string Logger::makeLogEntry(std::string const & msg)
{
	std::string msgLog;

	msgLog = "[" + Logger::timestamp() + "] " + msg;
	return(msgLog);
}

void Logger::log(std::string const & dest, std::string const & message)
{
	void (Logger::*arrPtrF[2])(std::string const msg) = {
															&Logger::logToConsole,
															&Logger::logToFile
														};

	const std::string arrNameCmd[] = {
										"console",
										"file"
									};

	std::string msgLog = this->makeLogEntry(message);

	for (int i = 0; i < 2; i++)
	{
		if (arrNameCmd[i].compare(dest) == 0)
			(this->*arrPtrF[i])(msgLog);
	}
}

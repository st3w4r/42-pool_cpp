/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 17:30:15 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/15 17:30:16 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : _nbContact(0) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void PhoneBook::start(void) {
	std::string buf;

	std::cout << "[PHONE BOOK] cmd: ";
	PhoneBook::_readGetLine(&buf);
	PhoneBook::_interpretCommand(buf);

	return PhoneBook::start();
}

void PhoneBook::_interpretCommand(std::string cmd) {
	if (cmd.compare("ADD") == 0)
		PhoneBook::_displayAddContact();
	else if (cmd.compare("SEARCH") == 0)
		PhoneBook::_displaySearchContact();
	else if (cmd.compare("EXIT") == 0)
		return;
	return;
}

void PhoneBook::_displayAddContact(void) {

	Contact contact;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;

	std::cout << "First Name: ";
	PhoneBook::_readGetLine(&firstName);
	std::cout << "Last Name: ";
	PhoneBook::_readGetLine(&lastName);
	std::cout << "Nickname: ";
	PhoneBook::_readGetLine(&nickName);
	std::cout << "Login: ";
	PhoneBook::_readGetLine(&login);
	std::cout << "Postal Address: ";
	PhoneBook::_readGetLine(&postalAddress);
	std::cout << "Email Address: ";
	PhoneBook::_readGetLine(&emailAddress);
	std::cout << "Phone number: ";
	PhoneBook::_readGetLine(&phoneNumber);
	std::cout << "Birthday date: ";
	PhoneBook::_readGetLine(&birthdayDate);
	std::cout << "Favorite Meal: ";
	PhoneBook::_readGetLine(&favoriteMeal);
	std::cout << "Underwear Color: ";
	PhoneBook::_readGetLine(&underwearColor);
	std::cout << "Darkest Secret: ";
	PhoneBook::_readGetLine(&darkestSecret);

	contact.initContact(firstName, lastName, nickName, login,
		postalAddress, emailAddress, phoneNumber, birthdayDate, favoriteMeal,
		underwearColor, darkestSecret);
	this->_addContact(contact);
	return;
}

void PhoneBook::_readGetLine(std::string *strIn)
{
	if (!(std::getline(std::cin, *strIn)))
		exit(0);
}

void PhoneBook::_displaySearchContact(void) const {

	for (int i = 0; i < this->_nbContact; i++)
		PhoneBook::_displayOneContact(_arrContact[i]);
}

void PhoneBook::_displayOneContact(Contact contact) const {
	std::cout << contact.getIndex();
	std::cout << "|";
	std::cout << contact.getFirstName();
	std::cout << "|";
	std::cout << contact.getLastName();
	std::cout << "|";
	std::cout << contact.getNickName();
	std::cout << std::endl;
}

void PhoneBook::_addContact(Contact contact)
{
	if (this->_nbContact < 8)
	{
		contact.setIndex(this->_nbContact);
		this->_arrContact[this->_nbContact] = contact;
		this->_nbContact++;
	}
	return;
}
/*
index, first name, last name and nickname.
___

first name, last name, nickname,
login, postal address, email address, phone number, birthday date, favorite
meal, underwear color and darkest secret
*/

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

PhoneBook::PhoneBook(void) {
	int i;

	i = 0;
	while (i < 8)
	{
		this->_arrContact[i] = NULL;
		++i;
	}
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void PhoneBook::start(void) {
	std::String buf;

	std::cout << "[PHONE BOOK]" << std::endl;
	std::getline(std::csin, buf);
	PhoneBook::_interpretCommand(buf);
	return;
}

void PhoneBook::_interpretCommand(std::String cmd) {
	if (cmd.compare("ADD") == 0)
		PhoneBook::_displayAddContact();
	else if (cmd.compare("SEARCH") == 0)
		return;
	else if (cmd.compare("EXIT") == 0)
		return;
	return;
}

void PhoneBook::_displayAddContact(void) {

	std::String fistName;
	std::String lastName;
	std::String nickName;
	std::String login;
	std::String postalAddress;
	std::String emailAddress;
	std::String phoneNumber;
	std::String birthdayDate;
	std::String favoriteMeal;
	std::String underwearColor;
	std::String darkestSecret;

	std::cout << "First Name: " << std::endl;
	std::cin >> fistName;
	std::cout << "Last Name: " << std::endl;
	std::cin >> lastName;
	std::cout << "Nickname: " << std::endl;
	std::cin >> nickName;
	std::cout << "Login: " << std::endl;
	std::cin >> login;
	std::cout << "Postal Address: " << std::endl;
	std::cin >> postalAddress;
	std::cout << "Email Address: " << std::endl;
	std::cin >> emailAddress;
	std::cout << "Phone number: " << std::endl;
	std::cin >> phoneNumber;
	std::cout << "Birthday date: " << std::endl;
	std::cin >> birthdayDate;
	std::cout << "Favorite Meal: " << std::endl;
	std::cin >> favoriteMeal;
	std::cout << "Underwear Color: " << std::endl;
	std::cin >> underwearColor;
	std::cout << "Darkest Secret: " << std::endl;
	std::cin >> darkestSecret;

	Contact contact = Contact::Contact(fistName, lastName, nickName, login,
		postalAddress, emailAddress, phoneNumber, birthdayDate, favoriteMeal,
		underwearColor, darkestSecret);
	this->_addContact(contact);
	return;
}

void PhoneBook::_addContact(Contact contact)
{
	int i;

	i = 0;
	while (this->_arrContact[i] != NULL && i < 8)
		++i;
	this->_arrContact[i] = contact;
	return;
}
/*
first name, last name, nickname,
login, postal address, email address, phone number, birthday date, favorite
meal, underwear color and darkest secret
*/

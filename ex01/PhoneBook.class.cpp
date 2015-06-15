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
	this->_nbContact = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void PhoneBook::start(void) {
	std::string buf;

	std::cout << "[PHONE BOOK]" << std::endl;
	std::getline(std::cin, buf);
	PhoneBook::_interpretCommand(buf);
	return;
}

void PhoneBook::_interpretCommand(std::string cmd) {
	if (cmd.compare("ADD") == 0)
		PhoneBook::_displayAddContact();
	else if (cmd.compare("SEARCH") == 0)
		return;
	else if (cmd.compare("EXIT") == 0)
		return;
	return;
}

void PhoneBook::_displayAddContact(void) {

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

	std::cout << "First Name: " << std::endl;
	std::cin >> firstName;
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

	Contact contact = Contact::Contact(firstName, lastName, nickName, login,
		postalAddress, emailAddress, phoneNumber, birthdayDate, favoriteMeal,
		underwearColor, darkestSecret);
	this->_addContact(contact);
	return;
}

void PhoneBook::_addContact(Contact contact)
{
	contact.setIndex(this->_nbContact);
	this->_arrContact[this->_nbContact] = contact;
	this->_nbContact++;
	return;
}
/*
first name, last name, nickname,
login, postal address, email address, phone number, birthday date, favorite
meal, underwear color and darkest secret
*/

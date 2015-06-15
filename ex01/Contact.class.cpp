/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 16:27:28 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/15 16:27:29 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(std::string firstName,
				std::string lastName,
				std::string nickName,
				std::string login,
				std::string postalAddress,
				std::string emailAddress,
				std::string phoneNumber,
				std::string birthdayDate,
				std::string favoriteMeal,
				std::string underwearColor,
				std::string darkestSecret
			) :
				_firstName(firstName),
				_lastName(lastName),
				_nickName(nickName),
				_login(login),
				_postalAddress(postalAddress),
				_emailAddress(emailAddress),
				_phoneNumber(phoneNumber),
				_birthdayDate(birthdayDate),
				_favoriteMeal(favoriteMeal),
				_underwearColor(underwearColor),
				_darkestSecret(darkestSecret)
{

	return;
}

Contact::~Contact(void) {
	return;
}

//__Getter__
int		Contact::getIndex(void) const {
	return this->_index;
}

std::string Contact::getfirstName(void) const {
	return this->_firstName;
}

std::string Contact::getLastName(void) const {
	return this->_lastName;
}

std::string Contact::getNickName(void) const {
	return this->_nickName;
}

std::string Contact::getLogin(void) const {
	return this->_login;
}

std::string Contact::getPostalAddress(void) const {
	return this->_postalAddress;
}

std::string Contact::getEmailAddress(void) const {
	return this->_emailAddress;
}

std::string Contact::getPhoneNumber(void) const {
	return this->_phoneNumber;
}

std::string Contact::getBirthdayDate(void) const {
	return this->_birthdayDate;
}

std::string Contact::getFavoriteMeal(void) const {
	return this->_favoriteMeal;
}

std::string Contact::getUnderwearColor(void) const {
	return this->_underwearColor;
}

std::string Contact::getDarkestSecret(void) const {
	return this->_darkestSecret;
}

//__Setter__
void Contact::setIndex(int index) {
	this->_index = index;
}

void Contact::setfirstName(std::string firstName) {
	this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
	this->_nickName = nickName;
}

void Contact::setLogin(std::string login) {
	this->_login = login;
}

void Contact::setPostalAddress(std::string postalAddress) {
	this->_postalAddress = postalAddress;
}

void Contact::setEmailAddress(std::string emailAddress) {
	this->_emailAddress = emailAddress;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void Contact::setBirthdayDate(std::string birthdayDate) {
	this->_birthdayDate = birthdayDate;
}

void Contact::setFavoriteMeal(std::string favoriteMeal) {
	this->_favoriteMeal = favoriteMeal;
}

void Contact::setUnderwearColor(std::string underwearColor) {
	this->_underwearColor = underwearColor;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

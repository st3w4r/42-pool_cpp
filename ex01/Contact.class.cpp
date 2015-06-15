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

Contact::Contact(std::String firstName,
				std::String lastName,
				std::String nickName,
				std::String login,
				std::String postalAddress,
				std::String emailAddress,
				std::String phoneNumber,
				std::String birthdayDate,
				std::String favoriteMeal,
				std::String underwearColor,
				std::String darkestSecret
			) :
				_fistName(firstName),
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
std::String Contact::getFistName(void) const {
	return this->_fistName;
}

std::String Contact::getLastName(void) const {
	return this->_lastName;
}

std::String Contact::getNickName(void) const {
	return this->_nickName;
}

std::String Contact::getLogin(void) const {
	return this->_login;
}

std::String Contact::getPostalAddress(void) const {
	return this->_postalAddress;
}

std::String Contact::getEmailAddress(void) const {
	return this->_emailAddress;
}

std::String Contact::getPhoneNumber(void) const {
	return this->_phoneNumber;
}

std::String Contact::getBirthdayDate(void) const {
	return this->_birthdayDate;
}

std::String Contact::getFavoriteMeal(void) const {
	return this->_favoriteMeal;
}

std::String Contact::getUnderwearColor(void) const {
	return this->_underwearColor;
}

std::String Contact::getDarkestSecret(void) const {
	return this->_darkestSecret;
}

//__Setter__
void Contact::setFistName(std::String firstName) {
	this->_firstName = firstName;
}

void Contact::setLastName(std::String lastName) {
	this->_lastName = lastName;
}

void Contact::setNickName(std::String nickName) {
	this->_nickName = nickName;
}

void Contact::setLogin(std::String login) {
	this->_login = login;
}

void Contact::setPostalAddress(std::String postalAddress) {
	this->_postalAddress = postalAddress;
}

void Contact::setEmailAddress(std::String emailAddress) {
	this->_emailAddress = emailAddress;
}

void Contact::setPhoneNumber(std::String phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void Contact::setBirthdayDate(std::String birthdayDate) {
	this->_birthdayDate = birthdayDate;
}

void Contact::setFavoriteMeal(std::String favoriteMeal) {
	this->_favoriteMeal = favoriteMeal;
}

void Contact::setUnderwearColor(std::String underwearColor) {
	this->_underwearColor = underwearColor;
}

void Contact::setDarkestSecret(std::String darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

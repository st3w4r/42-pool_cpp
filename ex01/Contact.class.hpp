/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 16:27:34 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/15 16:27:35 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>

class Contact {

	public:
		Contact(std::string firstName,
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
				);
		~Contact(void);

		//__Getter__
		int getIndex(void) const;
		std::string getfirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string getLogin(void) const;
		std::string getPostalAddress(void) const;
		std::string getEmailAddress(void) const;
		std::string getPhoneNumber(void) const;
		std::string getBirthdayDate(void) const;
		std::string getFavoriteMeal(void) const;
		std::string getUnderwearColor(void) const;
		std::string getDarkestSecret(void) const;

		//__Setter__
		void setIndex(int index);
		void setfirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickName(std::string nickName);
		void setLogin(std::string login);
		void setPostalAddress(std::string postalAddress);
		void setEmailAddress(std::string emailAddress);
		void setPhoneNumber(std::string phoneNumber);
		void setBirthdayDate(std::string birthdayDate);
		void setFavoriteMeal(std::string favoriteMeal);
		void setUnderwearColor(std::string underwearColor);
		void setDarkestSecret(std::string darkestSecret);

	private:
		//__Attributes__
		int			_index;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _login;
		std::string _postalAddress;
		std::string _emailAddress;
		std::string _phoneNumber;
		std::string _birthdayDate;
		std::string _favoriteMeal;
		std::string _underwearColor;
		std::string _darkestSecret;

		//__Methodes__


};

#endif //CONTACT_CLASS_HPP

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

class Contact {

	public:
		Contact(std::String firstName,
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
				);
		~Contact(void);

		//__Getter__
		std::String getFistName(void) const;
		std::String getLastName(void) const;
		std::String getNickName(void) const;
		std::String getLogin(void) const;
		std::String getPostalAddress(void) const;
		std::String getEmailAddress(void) const;
		std::String getPhoneNumber(void) const;
		std::String getBirthdayDate(void) const;
		std::String getFavoriteMeal(void) const;
		std::String getUnderwearColor(void) const;
		std::String getDarkestSecret(void) const;

		//__Setter__
		void setFistName(std::String firstName);
		void setLastName(std::String lastName);
		void setNickName(std::String nickName);
		void setLogin(std::String login);
		void setPostalAddress(std::String postalAddress);
		void setEmailAddress(std::String emailAddress);
		void setPhoneNumber(std::String phoneNumber);
		void setBirthdayDate(std::String birthdayDate);
		void setFavoriteMeal(std::String favoriteMeal);
		void setUnderwearColor(std::String underwearColor);
		void setDarkestSecret(std::String darkestSecret);

	private:
		//__Attributes__
		std::String _fistName;
		std::String _lastName;
		std::String _nickName;
		std::String _login;
		std::String _postalAddress;
		std::String _emailAddress;
		std::String _phoneNumber;
		std::String _birthdayDate;
		std::String _favoriteMeal;
		std::String _underwearColor;
		std::String _darkestSecret;

		//__Methodes__


};

#endif //CONTACT_CLASS_HPP

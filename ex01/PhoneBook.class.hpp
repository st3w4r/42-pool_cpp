/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 17:30:19 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/15 17:30:22 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void start(void);

	private:
		//Attributes
		Contact _arrContact[8];

		//Methodes
		void _addContact(Contact contact);

		void _searchContact(void);
		void _exitPhoneBook(void);
		void _interpretCommand(std::String cmd);

		void _displayAddContact(void);

};

#endif //PHONEBOOK_CLASS_HP

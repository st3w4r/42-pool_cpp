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

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);

		addContact(Contact::contact);
		searchContact(void);
		exitPhoneBook(void);

	private:
		

};

#endif //PHONEBOOK_CLASS_HP

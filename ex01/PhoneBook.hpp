/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:15:11 by jmanet            #+#    #+#             */
/*   Updated: 2023/03/31 11:51:54 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook{

	public :
		PhoneBook();
		PhoneBook(const PhoneBook& original);
		~PhoneBook();

		std::string	FormatedContactText(std::string	text);
		Contact& 	GetContactByIndex(int index);
		void		AddNewContact();
		void		ReplaceContact(Contact& Contact);
		void		DisplayContactList();
		void		DisplayContactShort(Contact& Contact, int index);
		void		DisplayContactFull(Contact& Contact);
		void		PromptUserChoice();

	private :
		int			_currentIndex;
		Contact		_contact1;
		Contact		_contact2;
		Contact		_contact3;
		Contact		_contact4;
		Contact		_contact5;
		Contact		_contact6;
		Contact		_contact7;
		Contact		_contact8;
};

#endif


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:24:47 by jmanet            #+#    #+#             */
/*   Updated: 2023/03/31 14:01:31 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_currentIndex = 1;
	return ;
}

PhoneBook::PhoneBook(const PhoneBook& original)
:	_currentIndex(original._currentIndex),
	_contact1(original._contact1),
	_contact2(original._contact2),
	_contact3(original._contact3),
	_contact4(original._contact4),
	_contact5(original._contact5),
	_contact6(original._contact6),
	_contact7(original._contact7),
	_contact8(original._contact8)
{
	return ;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::AddNewContact() {
	std::cout << "contact en cours : " << this->_currentIndex << std::endl;
	this->ReplaceContact(GetContactByIndex(this->_currentIndex));
	if (this->_currentIndex == 8)
		this->_currentIndex = 1;
	else
		this->_currentIndex++;
}

void	PhoneBook::ReplaceContact(Contact& Contact) {
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Veuillez entrer votre prenom : ";
	std::getline(std::cin, firstName);
	std::cout << "Veuillez entrer votre nom : ";
	std::getline(std::cin,lastName);
	std::cout << "Veuillez entrer votre surnom : ";
	std::getline(std::cin, nickname);
	std::cout << "Veuillez entrer votre numero de telephone : ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Veuillez entrer votre plus sombre secret : ";
	std::getline(std::cin, darkestSecret);

	Contact.UpdateContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	return;
}

std::string	PhoneBook::FormatedContactText(std::string text) {
	if (text.length() == 10)
		return (text);
	if (text.length() < 10){
		while (text.length() < 10)
			text = " " + text;
	}
	else {
		text.resize(10);
		text[9] = '.';
	}
	return (text);
}

void	PhoneBook::DisplayContactShort(Contact& Contact, int index) {
	std::cout << "|" << FormatedContactText(std::to_string(index)) << "|";
	std::cout << FormatedContactText(Contact.GetFirstName()) << "|";
	std::cout << FormatedContactText(Contact.GetLastName()) << "|";
	std::cout << FormatedContactText(Contact.GetNickname()) << "|" << std::endl;
}

void	PhoneBook::DisplayContactList(){
	std::cout << "LISTE DES CONTACTS : " << std::endl;
	std::cout << "|" << "   index  " << "|" << "first name" << "|" << " last name" << "|"<< " nickname " << "|" << std::endl;
	DisplayContactShort(this->_contact1, 1);
	DisplayContactShort(this->_contact2, 2);
	DisplayContactShort(this->_contact3, 3);
	DisplayContactShort(this->_contact4, 4);
	DisplayContactShort(this->_contact5, 5);
	DisplayContactShort(this->_contact6, 6);
	DisplayContactShort(this->_contact7, 7);
	DisplayContactShort(this->_contact8, 8);
}

Contact& PhoneBook::GetContactByIndex(int index) {
	if (index == 1)
		return (this->_contact1);
	else if (index == 2)
		return (this->_contact2);
	else if (index == 3)
		return (this->_contact3);
	else if (index == 4)
		return (this->_contact4);
	else if (index == 5)
		return (this->_contact5);
	else if (index == 6)
		return (this->_contact6);
	else if (index == 7)
		return (this->_contact7);
	else if (index == 8)
		return (this->_contact8);
	else
		return (this->_contact1);
}

void	PhoneBook::PromptUserChoice() {
	std::string	choice;

	DisplayContactList();
	while (1) {
	std::cout << "MENU SEARCH DE VOTRE REPERTOIRE" << std::endl;
	std::cout << "QUEL CONTACT SOUHAITEZ VOUS AFFICHER ? " << std::endl;
	std::cout << "TAPEZ UN CHIFFRE ENTRE 1 et 8 (0 POUR QUITTER - 9 POUR AFFICHER LA LISTE): ";
	std::getline(std::cin, choice);
		try {
			int choiceInt = std::stoi(choice);
			if (choiceInt > 0 && choiceInt < 9) {
				std::cout << "VOICI LE CONTACT NO " << choice << ":" << std::endl;
				PhoneBook::DisplayContactFull(GetContactByIndex(choiceInt));
			}
			else if (choiceInt == 9)
				DisplayContactList();
			else if (choiceInt == 0)
				break;
			else
				throw std::invalid_argument("CHOIX INVALIDE");
		}
		catch (std::invalid_argument const& e) {
			std::cerr << ("CHOIX INVALIDE") << std::endl;
		}
	}
}

void	PhoneBook::DisplayContactFull(Contact& Contact) {
	std::cout << "Prenom : " << Contact.GetFirstName() << std::endl;
	std::cout << "Nom : " << Contact.GetLastName() << std::endl;
	std::cout << "Surnom : " << Contact.GetNickname() << std::endl;
	std::cout << "Numero de telephone : " << Contact.GetPhoneNumber() << std::endl;
	std::cout << "Secret le plus sombre : " << Contact.GetDarkestSecret() << std::endl;
}

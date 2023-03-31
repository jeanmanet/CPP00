/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:48:32 by jmanet            #+#    #+#             */
/*   Updated: 2023/03/31 10:03:10 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	this->_firstName = "EMPTY";
	this->_lastName = "EMPTY";
	this->_nickname = "EMPTY";
	this->_phoneNumber = "EMPTY";
	this->_darkestSecret = "EMPTY";
	return;
}

Contact::Contact(const Contact& original)
:	_firstName(original._firstName),
	_lastName(original._lastName),
	_nickname(original._nickname),
	_phoneNumber(original._phoneNumber),
	_darkestSecret(original._darkestSecret)
{
	return;
}

Contact::~Contact() {};

std::string Contact::GetFirstName() const {
	return (this->_firstName);
}

std::string Contact::GetLastName() const {
	return (this->_lastName);
}

std::string Contact::GetNickname() const {
	return (this->_nickname);
}

std::string Contact::GetPhoneNumber() const {
	return (this->_phoneNumber);
}

std::string Contact::GetDarkestSecret() const {
	return (this->_darkestSecret);
}

void Contact::UpdateContact( std::string fn, std::string ln, std::string nn, std::string pn, std::string ds ) {
	this->SetFirstName(fn);
	this->SetLastName(ln);
	this->SetNickname(nn);
	this->SetPhoneNumber(pn);
	this->SetDarkestSecret(ds);
	return;
}

void Contact::SetFirstName(std::string firstName) {
	this->_firstName = firstName;
}

void Contact::SetLastName(std::string lastName) {
	this->_lastName = lastName;
}

void Contact::SetNickname(std::string nickname) {
	this->_nickname = nickname;
}

void Contact::SetPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void Contact::SetDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}

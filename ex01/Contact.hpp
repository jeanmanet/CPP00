/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:29:26 by jmanet            #+#    #+#             */
/*   Updated: 2023/03/31 12:50:16 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact{

	public:
		Contact();
		Contact(const Contact& Original);
		~Contact();

		std::string GetFirstName() const ;
		std::string GetLastName() const ;
		std::string GetNickname() const ;
		std::string GetPhoneNumber() const ;
		std::string GetDarkestSecret() const ;
		void UpdateContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		void SetFirstName(std::string string);
		void SetLastName(std::string string);
		void SetNickname(std::string string);
		void SetPhoneNumber(std::string string);
		void SetDarkestSecret(std::string string);

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};
#endif

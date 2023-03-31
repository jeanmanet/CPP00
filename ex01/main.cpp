/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:11:52 by jmanet            #+#    #+#             */
/*   Updated: 2023/03/31 14:02:00 by jmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main ()
{
	PhoneBook	repertoire;
	std::string	menu;

	while(1) {
		std::cout << "MENU PRINCIPAL DE VOTRE REPERTOIRE" << std::endl;
		std::cout << "VEUILLEZ ENTRER VOTRE CHOIX (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, menu);
		if (!menu.compare("ADD"))
			repertoire.AddNewContact();
		else if (!menu.compare("SEARCH"))
			repertoire.PromptUserChoice();
		else if (!menu.compare("EXIT"))
			exit (0);
		else {
			std::cout << "CHOIX INCORRECT !" << std::endl;
			std::cout << "VEUILLEZ ENTRER L'UN DES 3 MOTS CLES EN RESPECTANT LA CASSE." << std::endl;
		}
	}
	return (0);
}

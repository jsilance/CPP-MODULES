/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:36:58 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/29 08:53:08 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _nbContacts(0)
{
	std::cout << "Creation of PhoneBook" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destruction of PhoneBook" << std::endl;
	return;
}

std::string PhoneBook::getInput(std::string field) const
{
	std::string input;

	std::cout << field;
	std::cin >> input;
	return (input);
}

void PhoneBook::addContact(void)
{
	if (this->_nbContacts == 8)
		this->_nbContacts = 0;
	this->_contacts[this->_nbContacts].setFirstName(this->getInput("First name: "));
	this->_contacts[this->_nbContacts].setLastName(this->getInput("Last name: "));
	this->_contacts[this->_nbContacts].setNickname(this->getInput("Nickname: "));
	this->_contacts[this->_nbContacts].setLogin(this->getInput("Login: "));
	this->_contacts[this->_nbContacts].setPostalAddress(this->getInput("Postal Address: "));
	this->_contacts[this->_nbContacts].setEmailAddress(this->getInput("Email Address: "));
	this->_contacts[this->_nbContacts].setPhoneNumber(this->getInput("Phone Number: "));
	this->_contacts[this->_nbContacts].setBirthdayDate(this->getInput("Birthday date: "));
	this->_contacts[this->_nbContacts].setFavoriteMeal(this->getInput("Favorite meal: "));
	this->_contacts[this->_nbContacts].setUnderwearColor(this->getInput("Underwear color: "));
	this->_contacts[this->_nbContacts].setDarkestSecret(this->getInput("Darkest secret: "));
	this->_nbContacts++;
}

void PhoneBook::printContacts(void)
{
	size_t size_of_index = 1;
	size_t size_of_fn;
	size_t size_of_ln;
	size_t size_of_nc;

	std::cout << std::endl;
	
	for(int i = 0; i < 8; i++)
	{
		size_of_fn = this->_contacts[i].getFirstName().length();
		size_of_ln = this->_contacts[i].getLastName().length();
		size_of_nc = this->_contacts[i].getNickName().length();
		if (!size_of_fn && !size_of_ln && !size_of_nc)
			break;
		std::cout << "|";
		for (int j = 0; j < (int)(10 - size_of_index); j++)
			std::cout << " ";
		std::cout << i + 1;
		std::cout << "|";
		for (int j = 0; j < (int)(10 - size_of_fn); j++)
			std::cout << " ";
		for (int j = 0; j < 9 && j < size_of_fn; j++)
			std::cout << this->_contacts[i].getFirstName()[j];
		if (size_of_fn > 10)
			std::cout << ".";
		else
			std::cout << this->_contacts[i].getFirstName()[9];
		std::cout << "|";
		for (int j = 0; j < (int)(10 - size_of_ln); j++)
			std::cout << " ";
		for (int j = 0; j < 9 && j < size_of_ln; j++)
			std::cout << this->_contacts[i].getLastName()[j];
		if (size_of_ln > 10)
			std::cout << ".";
		else
			std::cout << this->_contacts[i].getLastName()[9];
		std::cout << "|";
		for (int j = 0; j < (int)(10 - size_of_nc); j++)
			std::cout << " ";
		for (int j = 0; j < 9 && j < size_of_nc; j++)
			std::cout << this->_contacts[i].getNickName()[j];
		if (size_of_nc > 10)
			std::cout << ".";
		else
			std::cout << this->_contacts[i].getNickName()[9];
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
}

void PhoneBook::printSpecifiedContact(int index)
{
	bool is_empty;

	is_empty = (this->_contacts[index].getFirstName().length() > 0);
	if (!is_empty)
		return;
	std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
	std::cout << "Login: " << this->_contacts[index].getLogin() << std::endl;
	std::cout << "Postal address: " << this->_contacts[index].getPostalAddress() << std::endl;
	std::cout << "Email address: " << this->_contacts[index].getEmailAddress() << std::endl;
	std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Birthday: " << this->_contacts[index].getBirthdayDate() << std::endl;
	std::cout << "Favorite meal: " << this->_contacts[index].getFavoriteMeal() << std::endl;
	std::cout << "Underwear color: " << this->_contacts[index].getUnderwearColor() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::searchContact(void)
{
	int			index = -1;

	PhoneBook::printContacts();

	std::cout << "Enter the id of the contact: ";

	if (!(std::cin >> index) || index < 1 || index > 8)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Wrong id, try something between 1 and 8" << std::endl;
	}

	if (index >= 1 && index <= 8)
	{
		index--;
		PhoneBook::printSpecifiedContact(index);
		std::cout << std::endl;
	}
}

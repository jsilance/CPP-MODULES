/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:36:58 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/16 15:20:01 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : nbContacts(0)
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
	if (this->nbContacts == 8)
		this->nbContacts = 0;
	this->contacts[this->nbContacts].setFirstName(this->getInput("First name: "));
	this->contacts[this->nbContacts].setLastName(this->getInput("Last name: "));
	this->contacts[this->nbContacts].setNickname(this->getInput("Nickname: "));
	this->contacts[this->nbContacts].setLogin(this->getInput("Login: "));
	this->contacts[this->nbContacts].setPostalAddress(this->getInput("Postal Address: "));
	this->contacts[this->nbContacts].setEmailAddress(this->getInput("Email Address: "));
	this->contacts[this->nbContacts].setPhoneNumber(this->getInput("Phone Number: "));
	this->contacts[this->nbContacts].setBirthdayDate(this->getInput("Birthday date: "));
	this->contacts[this->nbContacts].setFavoriteMeal(this->getInput("Favorite meal: "));
	this->contacts[this->nbContacts].setUnderwearColor(this->getInput("Underwear color: "));
	this->contacts[this->nbContacts].setDarkestSecret(this->getInput("Darkest secret: "));
	this->nbContacts++;
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
		size_of_fn = this->contacts[i].getFirstName().length();
		size_of_ln = this->contacts[i].getLastName().length();
		size_of_nc = this->contacts[i].getNickName().length();
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
			std::cout << this->contacts[i].getFirstName()[j];
		if (size_of_fn > 10)
			std::cout << ".";
		else
			std::cout << this->contacts[i].getFirstName()[9];
		std::cout << "|";
		for (int j = 0; j < (int)(10 - size_of_ln); j++)
			std::cout << " ";
		for (int j = 0; j < 9 && j < size_of_ln; j++)
			std::cout << this->contacts[i].getLastName()[j];
		if (size_of_ln > 10)
			std::cout << ".";
		else
			std::cout << this->contacts[i].getLastName()[9];
		std::cout << "|";
		for (int j = 0; j < (int)(10 - size_of_nc); j++)
			std::cout << " ";
		for (int j = 0; j < 9 && j < size_of_nc; j++)
			std::cout << this->contacts[i].getNickName()[j];
		if (size_of_nc > 10)
			std::cout << ".";
		else
			std::cout << this->contacts[i].getNickName()[9];
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
}

void PhoneBook::printSpecifiedContact(int index)
{
	bool is_empty;

	is_empty = (this->contacts[index].getFirstName().length() > 0);
	if (!is_empty)
		return;
	std::cout << "First name: " << this->contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << this->contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[index].getNickName() << std::endl;
	std::cout << "Login: " << this->contacts[index].getLogin() << std::endl;
	std::cout << "Postal address: " << this->contacts[index].getPostalAddress() << std::endl;
	std::cout << "Email address: " << this->contacts[index].getEmailAddress() << std::endl;
	std::cout << "Phone number: " << this->contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Birthday: " << this->contacts[index].getBirthdayDate() << std::endl;
	std::cout << "Favorite meal: " << this->contacts[index].getFavoriteMeal() << std::endl;
	std::cout << "Underwear color: " << this->contacts[index].getUnderwearColor() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[index].getDarkestSecret() << std::endl;
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

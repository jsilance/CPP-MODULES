/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:50:24 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/15 16:05:53 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setLogin(std::string login)
{
	this->login = login;
}

void Contact::setPostalAddress(std::string postalAddress)
{
	this->postalAddress = postalAddress;
}

void Contact::setEmailAddress(std::string emailAddress)
{
	this->emailAddress = emailAddress;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setBirthdayDate(std::string birthdayDate)
{
	this->birthdayDate = birthdayDate;
}

void Contact::setFavoriteMeal(std::string favoriteMeal)
{
	this->favoriteMeal = favoriteMeal;
}

void Contact::setUnderwearColor(std::string underwearColor)
{
	this->underwearColor = underwearColor;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void) const
{
	return (this->firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->nickname);
}

std::string	Contact::getLogin(void) const
{
	return (this->login);
}

std::string	Contact::getPostalAddress(void) const
{
	return (this->postalAddress);
}

std::string	Contact::getEmailAddress(void) const
{
	return (this->emailAddress);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

std::string	Contact::getBirthdayDate(void) const
{
	return (this->birthdayDate);
}

std::string	Contact::getFavoriteMeal(void) const
{
	return (this->favoriteMeal);
}

std::string	Contact::getUnderwearColor(void) const
{
	return (this->underwearColor);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->darkestSecret);
}

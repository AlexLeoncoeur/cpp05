#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "colors.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

private:



public:

	Intern();
	Intern(const Intern& other);
	~Intern();

	Intern& operator=(const Intern& other);

	AForm	*makeForm(const std::string form, const std::string target) const;
	AForm	*returnPresidentialPardonForm(std::string target) const;
	AForm	*returnRobotomyRequestForm(std::string target) const;
	AForm	*returnShrubberyCreationForm(std::string target) const;

};

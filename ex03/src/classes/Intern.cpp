#include "../../include/Intern.hpp"

Intern::Intern()
{
	std::cout << YELLOW << "Intern default constructor called" << RESET << std::endl;
	return ;
}

Intern::Intern(const Intern& other)
{
	std::cout << YELLOW << "Intern copy constructor called" << RESET << std::endl;
	*this = other;
	return ;
}

Intern::~Intern()
{
	std::cout << YELLOW << "Intern destructor called" << RESET << std::endl;
	return ;
}

Intern& Intern::operator=(const Intern& other)
{
	std::cout << YELLOW << "Intern copy assignment operator called" << RESET << std::endl;
	return *this;
}

AForm	*Intern::makeForm(const std::string form, const std::string target) const
{
	std::string	forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	AForm	*(Intern::*pointerToConstructor[3])(std::string target) const = {&Intern::returnPresidentialPardonForm, &Intern::returnRobotomyRequestForm, &Intern::returnShrubberyCreationForm};

	for (int i = 0; i < 3; i++)
	{
		if (!forms[i].compare(form))
			return ((this->*pointerToConstructor[i])(target));
	}
}

AForm	*Intern::returnPresidentialPardonForm(std::string target) const
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::returnRobotomyRequestForm(std::string target) const
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::returnShrubberyCreationForm(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}
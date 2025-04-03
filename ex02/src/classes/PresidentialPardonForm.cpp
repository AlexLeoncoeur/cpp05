#include "../../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default_target")
{
	std::cout << YELLOW << "Default constructor called for PresidentialPardonForm" << RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << YELLOW << "Constructor called for PresidentialPardonForm with target: " << target << RESET << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
	std::cout << YELLOW << "Copy constructor called for PresidentialPardonForm" << RESET << std::endl;
	*this = copy;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << YELLOW << "Destructor called for PresidentialPardonForm" << RESET << std::endl;
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	std::cout << YELLOW << "Copy assignment operator called for PresidentialPardonForm" << RESET << std::endl;
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	std::cout << GREEN << this->_target << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;
	return ;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}
#pragma once

# include "AForm.hpp"
# include "colors.hpp"
# include <fstream>
# include <iostream>

class PresidentialPardonForm : public AForm
{

private:

	std::string	_target;

public:

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);

	void	action(Bureaucrat const &executor) const;

	std::string getTarget() const;
};

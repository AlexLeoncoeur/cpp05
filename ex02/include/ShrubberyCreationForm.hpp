#pragma once

# include "AForm.hpp"
# include "colors.hpp"
# include <fstream>
# include <iostream>

class ShrubberyCreationForm : public AForm
{

private:

	std::string	_target;

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy);

	void	execute(Bureaucrat const &executor) const;

	std::string getTarget() const;
};

#pragma once

# include "AForm.hpp"
# include "colors.hpp"
# include <fstream>
# include <iostream>
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm
{

private:

	std::string	_target;

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm &copy);

	void	execute(Bureaucrat const &executor) const;

	std::string getTarget() const;
};

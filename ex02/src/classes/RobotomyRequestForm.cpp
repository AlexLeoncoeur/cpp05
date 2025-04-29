#include "../../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout << GREEN << "RobotomyRequestForm default constructor called" << RESET << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << GREEN << "RobotomyRequestForm constructor called" << RESET << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade())
{
	std::cout << GREEN << "RobotomyRequestForm copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "RobotomyRequestForm destructor called" << RESET << std::endl;
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	std::cout << GREEN << "RobotomyRequestForm assignment operator called" << RESET << std::endl;
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return (*this);
}

void	RobotomyRequestForm::action(Bureaucrat const &executor) const
{
	std::cout << YELLOW << "*Drilling noises*" << RESET << std::endl;
	srand(time(NULL));
	int random = rand() % 2;
	if (random == 0)
	{
		std::cout << YELLOW << _target << " has been robotomized" << GREEN << " successfully" << RESET << std::endl;
	}
	else
	{
		std::cout << RED << _target << " has failed to be robotomized" << RESET << std::endl;
	}
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}
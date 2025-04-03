#include "../../include/AForm.hpp"

AForm::AForm() : _name("default"), _signGrade(150), _execGrade(150)
{
	std::cout	<< BLUE << "AForm default constructor called" << RESET << std::endl;
	this->_signed = false;
	return ;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout	<< BLUE << "AForm constructor called" << RESET << std::endl;
	try
	{
		if (_signGrade < 1 || execGrade < 1)
			throw GradeTooHighException();
		else if (_signGrade > 150 || execGrade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cerr << RED << this->_name << " : " << e.what() << RESET << std::endl;
	}
	this->_signed = false;
	return ;
}

AForm::AForm(const AForm &copy) : _name(copy._name), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	std::cout	<< BLUE << "AForm copy constructor called" << RESET << std::endl;
	this->_signed = copy._signed;
	return ;
}

AForm::~AForm()
{
	std::cout	<< RED << "AForm destructor called" << RESET << std::endl;
	return ;
}

AForm& AForm::operator=(const AForm &copy)
{
	if (this != &copy)
		this->_signed = copy._signed;
	return (*this);
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}

int AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int AForm::getExecGrade() const
{
	return (this->_execGrade);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > this->_signGrade)
			throw GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cerr << RED << bureaucrat.getName() << " cannot sign " << this->_name << " because " << e.what() << RESET << std::endl;
		return ;
	}
	this->_signed = true;
	std::cout << GREEN << bureaucrat.getName() << " signed " << this->_name << RESET << std::endl;

}

std::ostream& operator<<(std::ostream &outStream, const AForm &form)
{
	outStream	<< MAGENTA << "Form name : " << YELLOW << form.getName() << RESET << std::endl;
	if (form.getSigned())
		outStream	<< MAGENTA << "Form signed : " << GREEN << "True" << RESET << std::endl;
	else
		outStream	<< MAGENTA << "Form signed : " << RED << "False" << RESET << std::endl;
	outStream	<< MAGENTA << "Form sign grade : " << YELLOW << form.getSignGrade() << RESET << std::endl;
	outStream	<< MAGENTA << "Form exec grade : " << YELLOW << form.getExecGrade() << RESET << std::endl;
	return (outStream);
}
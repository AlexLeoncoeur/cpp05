#include "../../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout	<< BLUE << "Bureaucrat default constructor called" << RESET << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout	<< BLUE << "Bureaucrat constructor called" << RESET << std::endl;
	try 
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
		if (grade < 1)
			this->_grade = 1;
		else
			this->_grade = 150;
		return ;
	}
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	std::cout	<< BLUE << "Bureaucrat copy constructor called" << RESET << std::endl;
	this->_grade = copy._grade;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout	<< BLUE << "Bureaucrat assignment operator called" << RESET << std::endl;
	if (this != &copy)
		this->_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout	<< RED << "Bureaucrat destructor called" << RESET << std::endl;
	return ;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (this->_grade == 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
		return ;
	}
	this->_grade--;
	return ;
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade == 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
		return ;
	}
	this->_grade++;
	return ;
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

std::ostream& operator<<(std::ostream &outStream, const Bureaucrat &bureaucrat)
{
	outStream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (outStream);
}
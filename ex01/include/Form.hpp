#pragma once

#include "Bureaucrat.hpp"
#include "colors.hpp"
#include <string>

class Bureaucrat;

class Form
{

private:

	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;

public:

	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &copy);
	~Form();

	Form& operator=(const Form &copy);

	void		beSigned(const Bureaucrat &bureaucrat);

	std::string getName() const;
	bool		getSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

class GradeTooHighException : public std::exception
{
public:
	const char* what() const throw()
	{
		return ("Grade too high");
	}
};

class GradeTooLowException : public std::exception
{
public:
	const char* what() const throw()
	{
		return ("Grade too low");
	}
};

};

std::ostream& operator<<(std::ostream &outStream, const Form &form);
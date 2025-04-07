#pragma once

#include "Bureaucrat.hpp"
#include "colors.hpp"
#include <string>

class Bureaucrat;

class AForm
{

private:

	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;

public:

	AForm();
	AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm &copy);
	~AForm();

	AForm& operator=(const AForm &copy);

	void			beSigned(const Bureaucrat &bureaucrat);
	virtual void	execute(Bureaucrat const &executor) const = 0;

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

std::ostream& operator<<(std::ostream &outStream, const AForm &form);
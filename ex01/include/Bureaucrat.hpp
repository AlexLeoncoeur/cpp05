#pragma once

# include <string>
# include <iostream>
# include "colors.hpp"
# include "Form.hpp"

class Form;

class Bureaucrat
{

private:

	const std::string	_name;
	int					_grade;

public:

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	virtual ~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat &copy);

	void		incrementGrade();
	void		decrementGrade();
	void		signForm(Form &form);

	std::string getName() const;
	int 		getGrade() const;

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

std::ostream& operator<<(std::ostream &outStream, const Bureaucrat &bureaucrat);
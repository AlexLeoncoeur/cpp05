#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"


int	main(void)
{
	Bureaucrat	b1("Don Pipo", 1);
	Bureaucrat	b2("Doña Elena", 150);
	PresidentialPardonForm	form1("Pipovich");
	RobotomyRequestForm	form2("Claptrap");
	ShrubberyCreationForm	form3("casa");

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;
	std::cout << std::endl;
	b1.signForm(form1);
	b1.signForm(form2);
	b2.signForm(form3);
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl;
	b2.executeForm(form1);
	b1.executeForm(form2);
	b1.executeForm(form3);
	b2.executeForm(form3);
	b1.signForm(form3);
	b1.executeForm(form3);
	b1.incrementGrade();
	
	return (0);
}
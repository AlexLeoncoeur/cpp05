#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/Intern.hpp"


int	main(void)
{
	Bureaucrat	pipo("Don Pipo", 1);
	Intern		paco();

	paco.makeForm("PresidentialPardonForm", "EvilAFM");
	
	return (0);
}
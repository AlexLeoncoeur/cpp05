#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/Intern.hpp"


int	main(void)
{
	Bureaucrat	pipo("Don Pipo", 1);
	Intern		paco;

	AForm		*form = paco.makeForm("PresidentialPardonForm", "EvilAFM");
	if (!form)
		return (delete form, 1);
	pipo.signForm(*form);
	pipo.executeForm(*form);
	/* AForm		*fakeForm = paco.makeForm("pipoesunbuenperro", "pipo");
	if (!fakeForm)
		return (delete form, 1);
	pipo.signForm(*fakeForm); */
	delete form;
	return (0);
}
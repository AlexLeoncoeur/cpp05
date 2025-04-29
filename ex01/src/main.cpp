#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int	main(void)
{
	Bureaucrat	b1("Don Pipo", 1);
	Bureaucrat	b2("Doña Elena", 150);
	Form		form1("Form1", 1, 1);
	Form		form2("Form2", 20, 20);
	Form		wrongForm("wrongForm", 1, 151);

	std::cout	<< b1 << std::endl;
	std::cout	<< b2 << std::endl;
	std::cout	<< form1 << std::endl;
	std::cout	<< form2 << std::endl;
	b1.signForm(form1);
	std::cout	<< form1 << std::endl;
	b2.signForm(form2);
	std::cout	<< form2 << std::endl;
	b1.signForm(form2);
	std::cout	<< form2 << std::endl;
	b1.signForm(form1);
	std::cout	<< wrongForm << std::endl;
	b1.signForm(wrongForm);
	std::cout	<< wrongForm << std::endl;
	return (0);
}
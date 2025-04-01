#include "../include/Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	bureaucrat1;
	Bureaucrat	bureaucrat2("bureaucrat2", 1);
	Bureaucrat	bureaucrat3("bureaucrat3", 150);
	Bureaucrat	bureaucrat4(bureaucrat2);

	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;
	std::cout << bureaucrat3 << std::endl;
	std::cout << bureaucrat4 << std::endl;
	bureaucrat1.incrementGrade();
	std::cout << bureaucrat1 << std::endl;
	bureaucrat1.decrementGrade();
	std::cout << bureaucrat1 << std::endl;
	bureaucrat3.decrementGrade();
	std::cout << bureaucrat3 << std::endl;
	return (0);
}
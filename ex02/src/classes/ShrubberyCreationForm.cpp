#include "../../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << GREEN << "ShrubberyCreationForm default constructor called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << GREEN << "ShrubberyCreationForm constructor called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade())
{
	std::cout << GREEN << "ShrubberyCreationForm copy constructor called" << RESET << std::endl;
	*this = copy;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << GREEN << "ShrubberyCreationForm destructor called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	std::cout << GREEN << "ShrubberyCreationForm assignment operator called" << RESET << std::endl;
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	outFile(_target + "_shrubbery");
	if (!outFile.is_open())
		std::cerr << "error: cannot open outfile" << std::endl, exit(1);
	outFile << "         _-_-_         " << std::endl;
	outFile << "      _-       -_      " << std::endl;
	outFile << "    _-             -_   " << std::endl;
	outFile << "   -                 -  " << std::endl;
	outFile << "  -                   - " << std::endl;
	outFile << " -                     -" << std::endl;
	outFile << "  -                   - " << std::endl;
	outFile << "   -                 -  " << std::endl;
	outFile << "    -               -   " << std::endl;
	outFile << "     -             -    " << std::endl;
	outFile << "      -           -     " << std::endl;
	outFile << "       -         -      " << std::endl;
	outFile << "        -       -       " << std::endl;
	outFile << "         -     -        " << std::endl;
	outFile << "          -   -         " << std::endl;
	outFile << "           - -          " << std::endl;
	outFile << "            -           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
	outFile << "            |           " << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}
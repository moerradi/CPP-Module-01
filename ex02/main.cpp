#include <iostream>

int main() {
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "The memory address of the string variable is : " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR is : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is : " << &stringREF << std::endl;

	std::cout << "The value of the string variable is : \"" << brain << "\"" << std::endl;
	std::cout << "The value pointed to by stringPTR is : \"" << *stringPTR << "\"" << std::endl;
	std::cout << "The value pointed to by stringREF is : \"" << stringREF << "\"" << std::endl;
}
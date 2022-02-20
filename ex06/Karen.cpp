#include "Karen.hpp"

Karen::Karen(void) {
	_complaints["debug"] = &Karen::debug;
	_complaints["info"] = &Karen::info;
	_complaints["warning"] = &Karen::warning;
	_complaints["error"] = &Karen::error;
}

Karen::~Karen(void) {
	// std::cout << "Karen: Destructor called" << std::endl;
}

Karen::Karen(Karen const &src) {
	std::cout << "Karen: Copy constructor called" << std::endl;
	_complaints = src._complaints;
}

Karen &Karen::operator=(const Karen &rhs) {
	std::cout << "Karen: Assignment operator called" << std::endl;
	if (this != &rhs) {
		_complaints = rhs._complaints;
	}
	return (*this);
}

void Karen::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level) {
	(this->*_complaints[level])();
}
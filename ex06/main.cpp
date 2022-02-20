#include "Karen.hpp"

std::string upper(std::string str)
{
	std::string upper_str;
	for (size_t i = 0; i < str.length(); i++)
	{
		upper_str += toupper(str[i]);
	}
	return upper_str;
}

enum code {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	ALL
};

code hash_level(std::string const& level) {
	std::string tmp = upper(level);
	if (tmp == "DEBUG")
		return DEBUG;
	else if (tmp == "INFO")
		return INFO;
	else if (tmp == "WARNING")
		return WARNING;
	else if (tmp == "ERROR")
		return ERROR;
	else
		return ALL;
}

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Usage: ./karenFilter <level>" << std::endl;
		std::cout << "Karen filters co Ltd. at your service." << std::endl;
		return (0);
	}
	Karen karen;
	std::string levels[] = {"debug", "info", "warning", "error"};
	int i = 4;
	switch (hash_level(argv[1])) {
		case DEBUG:
			i = 0;
			break;
		case INFO:
			i = 1;
			break;
		case WARNING:
			i = 2;
			break;
		case ERROR:
			i = 3;
			break;
		default:
			i = 4;
			break;
	}
	if (i == 4)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	for ( ; i < 4; i++) {
		std::cout  << "[" << upper(levels[i]) << "]" << std::endl;
		karen.complain(levels[i]);
		std::cout << std::endl;
	}
	return (0);
}
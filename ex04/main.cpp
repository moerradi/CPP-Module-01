#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage : ./hel filname to_replace new_string" << std::endl;
		return (0);
	}
	std::string filename = argv[1];
	std::ifstream file(filename);
	if (!file)
	{
		std::cout << "error : can't open file" << std::endl;
		return (0);
	}
	std::string	toReplace = argv[2];
	std::string	newString = argv[3];
	std::string str;
	std::ostringstream oss;
	oss << file.rdbuf();
	str = oss.str();
	size_t	index = 0;
	while ((index = str.find(argv[2],index)) != std::string::npos) {
		str.erase(index, toReplace.size());
		str.insert(index, newString);
		index += newString.size();
	}
	std::ofstream outfile(filename.append(".replace"));
	outfile << str;
	outfile.close();
}

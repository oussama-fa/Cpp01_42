# include <iostream>
# include <fstream>
# include <string>

int main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Error: Wrong Number of Arguments !!" << std::endl;
		return (1);
	}
	std::string s1 = av[2];
	if (s1.empty()) {
		std::cerr << "Error: s1 is empty !!" << std::endl;
		return (2);
	}

	std::string s2 = av[3];

	std::ifstream fileName(av[1]);
	if (!fileName.is_open()) {
		std::cerr << "Error: Invalid file name !!" << std::endl;
		return (3);
	}

	std::string content;
	std::getline(fileName, content, '\0');

	std::string newFileName = std::string(av[1]) + ".replace";
	std::ofstream outPutFile(newFileName.c_str());
	if (!outPutFile.is_open()) {
		std::cerr << "Error: Cannot open output file !!" << std::endl;
		return (4);
	}

	std::string res;
	size_t pos = 0;
	while (true) {
		size_t found = content.find(s1, pos);
		if (found == std::string::npos)
			break ;
		res += content.substr(pos, found - pos);
		res += s2;
		pos = found + s1.length();
	}
	res += content.substr(pos);
	outPutFile << res;
	outPutFile.close();
	fileName.close();
	return (0);
}

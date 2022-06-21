//
// Created by 大貫　弘貴 on 2022/06/19.
//
#include <iostream>
#include <fstream>

std::string replaceOtherStr(std::string &replacedStr, std::string from, std::string to) {
	const unsigned int pos = replacedStr.find(from);
	const int len = from.length();

	if (pos == std::string::npos || from.empty()) {
		return replacedStr;
	}

	return replacedStr.replace(pos, len, to);
}

int main(int argc, char **argv) {
	if (argc != 4)
		std::exit(1);

	try {
		std::ifstream fis(argv[1]);
		std::ofstream fos(std::strcat(argv[1], ".replace"), std::ios_base::app);

		if (!fis)
			std::cerr << "file can not open." << std::endl;
		else {
			while (true) {
				std::string text;
				getline(fis, text);
				if (!fis)
					break;
				fos << replaceOtherStr(text, argv[2], argv[3]) << std::endl;
			}
		}
	} catch (std::exception e) {
		e.what();
	}
}

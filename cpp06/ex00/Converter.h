//
// Created by 大貫　弘貴 on 2022/07/28.
//

#ifndef CPP_MODULE_CONVERTER_H
#define CPP_MODULE_CONVERTER_H

#include <cerrno>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

class Converter {
private:
	const std::string str;
	int valueType;
	char c;
	int i;
	float f;
	double d;
	std::string cStr;
	std::string iStr;
	std::string fStr;
	std::string dStr;

public:
	enum valueType {
		UNDEFINE,
		CHAR,
		INT,
		FLOAT,
		DOUBLE
	};
	Converter() {}
	Converter(const std::string &str = "");
	Converter(const Converter& other);
	Converter& operator=(const Converter& other);
	virtual ~Converter() {}

	void detectType();
	bool isChar();
	bool isInt();
	bool isFloat();
	bool isDouble();

	void setValues();
	void setValuesFromChar();
	void setValuesFromInt();
	void setValuesFromFloat();
	void setValuesFromDouble();

	void setStrs();
	void setStrsFromChar();
	void setStrsFromInt();
	void setStrsFromFloat();
	void setStrsFromDouble();
	void setStrsError();

	char getC() const { return this->c; }
	int getI() const { return this->i; }
	float getF() const { return this->f; }
	double getD() const { return this->d; }

	const std::string getCstr() const { return cStr; }
	const std::string getIstr() const { return iStr; }
	const std::string getFstr() const { return fStr; }
	const std::string getDstr() const { return dStr; }
	const std::string getStr() const { return str; }
	const std::string getType() const;


};

std::ostream &operator<<(std::ostream &ost, const Converter &rhs) {
	ost << "char: " << rhs.getCstr() << "\n";
	ost << "int: " << rhs.getIstr() << "\n";
	ost << "float: " << rhs.getFstr() << "\n";
	ost << "double: " << rhs.getDstr() << "\n";

	return ost;
}


#endif //CPP_MODULE_CONVERTER_H

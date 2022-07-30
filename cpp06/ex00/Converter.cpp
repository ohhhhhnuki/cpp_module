//
// Created by 大貫　弘貴 on 2022/07/28.
//

#include "Converter.h"

Converter::Converter(const std::string &str) : str(str) {}

const std::string Converter::getType() const {
	switch (valueType) {
		case CHAR: return "Char";
		case INT: return "Int";
		case FLOAT: return "Float";
		case DOUBLE: return "Double";
		default : return "???????";
	}
}

bool Converter::isChar() {
	if ((str.length() == 1 && !std::isdigit(str[0])) ||
			(str.length() == 3 && str[0] == '\'' && str[1] >= 0 &&
			str[1] <= 127 && str[2] == '\''))
		return true;
	else
		return false;
}

bool Converter::isInt() {
	const char *p = str.c_str();
	char *end;
	errno = 0;
	long x = std::strtol(p, &end, 10);

	if (p == end || *end || errno == ERANGE || x < INT_MIN || x > INT_MAX)
		return false;
	else
		return true;
}

bool Converter::isFloat() {
	if (this->isDouble())
		return false;
	if (str[str.length() - 1] != 'f')
		return false;

	std::string noFstr = str.substr(0, str.length() - 1);
	const char *p = noFstr.c_str();
	char *end;
	errno = 0;
	std::strtof(p, &end);

	if (p == end || *end || errno == ERANGE || str == "+nanf" || str == "-nanf")
		return false;
	else
		return true;
}

void Converter::detectType() {
	if (this->isChar())
		valueType = CHAR;
	else if (this->isInt())
		valueType = INT;
	else if (this->isFloat())
		valueType = FLOAT;
	else if (this->isDouble())
		valueType = DOUBLE;
	else
		valueType = UNDEFINE;
}

void Converter::setValues() {
	switch (valueType) {
		case CHAR:
			setStrsFromChar();
			break;
		case INT:
			setValuesFromInt();
			break;
		case FLOAT:
			setStrsFromFloat();
			break;
		case DOUBLE:
			setStrsFromDouble();
			break;
	}
}

void Converter::setValuesFromChar() {
	if (str.length() == 1)
		c = str[0];
	else if (str.length() == 3)
		c = str[1];

	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);
}

void Converter::setValuesFromInt() {
	i = std::atoi(str.c_str());

	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
}

void Converter::setStrsFromFloat() {
	char *end;

	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);
}

void Converter::setStrsFromDouble() {
	char *end;
	d = std::strtod(str.c_str(), &end);

	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);
}

void Converter::setStrs() {
	switch(valueType) {
		case CHAR:
			setStrsFromChar();
			break;
		case INT:
			setValuesFromInt();
			break;
		case FLOAT:
			setStrsFromFloat();
			break;
		case DOUBLE:
			setStrsFromDouble();
			break;
		default:
			setStrsError();
	}
}

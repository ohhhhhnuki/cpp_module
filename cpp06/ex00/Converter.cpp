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

bool Converter::isDouble() {
	if (this->isInt())
		return false;
	const char *p = str.c_str();
	char *end;
	errno = 0;
	std::strtod(p, &end);

	if (p == end || *end || errno == ERANGE || str == "+nan" || str == "-nan")
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

void Converter::setValuesFromFloat() {
	char *end;
	f = std::strtof(str.c_str(), &end);

	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);
}

void Converter::setValuesFromDouble() {
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

void Converter::setStrsFromChar() {
	std::ostringstream oss;

	oss << '\'' << c << '\'';
	cStr = oss.str();
	oss.str("");
	oss.clear();

	oss << i;
	iStr = oss.str();
	oss.str("");
	oss.clear();

	oss << i << ".0";
	dStr = oss.str();
}

void Converter::setStrsFromInt() {
	std::ostringstream oss;

	if ((i >= 0 && i <= 31) || i == 127)
		oss << "Non desplayable";
	else if (i >= 32 && i <= 126)
		oss << '\'' << c << '\'';
	else
		oss << "impossible";
	cStr = oss.str();
	oss.str("");
	oss.clear();

	oss << i;
	iStr = oss.str();
	oss.str("");
	oss.clear();

	oss << i << ".0f";
	fStr = oss.str();
	oss.str("");
	oss.clear();

	oss << i << ".0";
	dStr = oss.str();
}

void Converter::setStrsFromFloat() {
	std::ostringstream oss;

	if ((i >= 0 && i <= 31) || i == 127)
		oss << "Non desplayable";
	else if (i >= 32 && i <= 126)
		oss << '\'' << c << '\'';
	else
		oss << "impossible";
	cStr = oss.str();
	oss.str("");
	oss.clear();

	if (static_cast<long>(f) <= INT_MIN || static_cast<long>(f) >= INT_MAX)
		oss << "impossible";
	else
		oss << i;
	iStr = oss.str();
	oss.str("");
	oss.clear();

	if (i == f)
		oss << i << ".0f";
	else
		oss << f << "f";
	fStr = oss.str();
	oss.str("");
	oss.clear();

	if (i == d)
		oss << i << ".0";
	else
		oss << d;
	dStr = oss.str();
}

void Converter::setStrsFromDouble() {
	std::ostringstream oss;

	if ((i >= 0 && i <= 31) || i == 127)
		oss << "Non desplayable";
	else if (i >= 32 && i <= 126)
		oss << '\'' << c << '\'';
	else
		oss << "impossible";
	cStr = oss.str();
	oss.str("");
	oss.clear();

	if (static_cast<long>(d) <= INT_MIN || static_cast<long>(d) >= INT_MAX)
		oss << "impossible";
	else
		oss << i;
	iStr = oss.str();
	oss.str("");
	oss.clear();

	if (i == f)
		oss << i << ".0f";
	else
		oss << f << "f";
	fStr = oss.str();
	oss.str("");
	oss.clear();

	if (i == d)
		oss << i << ".0";
	else
		oss << d;
	dStr = oss.str();
}

void Converter::setStrsError() {
	cStr = "impossible";
	iStr = "impossible";
	fStr = "impossible";
	dStr = "impossible";
}

std::ostream &operator<<(std::ostream &ost, const Converter &rhs) {
	ost << "char: " << rhs.getCstr() << "\n";
	ost << "int: " << rhs.getIstr() << "\n";
	ost << "float: " << rhs.getFstr() << "\n";
	ost << "double: " << rhs.getDstr() << "\n";

	return ost;
}
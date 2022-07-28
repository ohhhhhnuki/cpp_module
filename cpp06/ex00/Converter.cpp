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
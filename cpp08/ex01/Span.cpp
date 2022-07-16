//
// Created by 大貫　弘貴 on 2022/07/16.
//

#include "Span.h"

Span::Span() {
	std::cout << "[Span] default constructor called." << std::endl;
}

Span::Span(int number) {
	std::cout << "[Span] constructor called." << std::endl;
	this->spanList = std::vector<int>(number);
}

Span::~Span() {
	std::cout << "[Span] destructor called." << std::endl;
}

void Span::addNumber(int number) {
	this->spanList.push_back(number);
}

int Span::shortestSpan() {
	return *(std::min_element(this->spanList.begin(), this->spanList.end()));
}

int Span::longestSpan() {
	return *(std::max_element(this->spanList.begin(), this->spanList.end()));
}